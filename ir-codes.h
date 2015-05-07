#undef min
#undef max
#include <vector>
#include <string>
enum IR_Command {
  NO_COMMAND,
  APPLE_MENU,
  APPLE_PLAY,
  APPLE_SELECT,
  APPLE_UP,
  APPLE_DOWN,
  APPLE_LEFT,
  APPLE_RIGHT,
  SAMSUNG_VOLUME_UP,
  SAMSUNG_VOLUME_DOWN,
  SAMSUNG_UP,
  SAMSUNG_DOWN,
  SAMSUNG_LEFT,
  SAMSUNG_RIGHT,
  SAMSUNG_OK,
  SAMSUNG_PLAY,
  SAMSUNG_STOP,
  SAMSUNG_TOOLS
};
struct Command {
  IR_Command command;
  // ON, OFF (in microseconds)
  short *blinks;
  short blinks_length;
  char const   *name;
};

const Command *get_command(IR_Command command);
const IR_Command identify_command(const int *blinks, int num_blinks);

