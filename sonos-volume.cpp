#include "sonos-volume.h"
#include "HttpClient.h"

http_header_t headers[] =
{
    { "SOAPAction" , "urn:schemas-upnp-org:service:RenderingControl:1#SetVolume"},
    { "Content-type", "text/xml; charset=utf8"},
    { NULL, NULL } // NOTE: Always terminate headers will NULL
};
const char* set_volume_body_start = "<?xml version=\"1.0\" encoding=\"utf-8\"?><s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\" s:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\">  <s:Body><u:SetVolume xmlns:u=\"urn:schemas-upnp-org:service:RenderingControl:1\"><InstanceID>0</InstanceID><Channel>Master</Channel><DesiredVolume>";
const char* set_volume_body_end = "</DesiredVolume></u:SetVolume></s:Body></s:Envelope>";
int current_volume_ = 30;

void set_volume(int new_volume) {
    HttpClient http;
    http_request_t request;
    request.hostname = "10.0.1.9";
    request.port = 1400;
    request.path = "/MediaRenderer/RenderingControl/Control";
    char str[1024];
    sprintf(str, "%s%d%s", set_volume_body_start, new_volume, set_volume_body_end);
    request.body = str;
    http_response_t response;
    http.post(request, response, headers);
    Serial.println(response.body.c_str());

    current_volume_ = new_volume;
}

int volume() {
    return current_volume_;
}
