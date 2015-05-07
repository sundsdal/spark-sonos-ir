#include "ir-codes.h"
#include <string>
#include "application.h"

static  short ApplePlay[] = {
  // ON, OFF (in microseconds)
  9055, 4449,
  571, 549,
  572, 1647,
  572, 1648,
  573, 1647,
  572, 551,
  570, 1648,
  572, 1648,
  572, 1648,
  572, 1648,
  572, 1648,
  572, 1648,
  572, 549,
  571, 549,
  571, 550,
  571, 549,
  571, 1649,
  571, 1648,
  572, 1648,
  572, 1648,
  572, 1648,
  572, 1647,
  574, 546,
  574, 1646,
  564, 556,
  564, 556,
  564, 1656,
  564, 1655,
  565, 555,
  566, 554,
  566, 1653,
  567, 554,
  566, 570,
  571
};

short AppleMenu[] =
{
  // ON, OFF (in microseconds)
  9079, 4428,
  593, 527,
  594, 1626,
  604, 1616,
  594, 1626,
  604, 517,
  593, 1627,
  604, 1616,
  594, 1625,
  605, 1616,
  604, 1618,
  603, 1616,
  604, 516,
  604, 517,
  605, 515,
  604, 517,
  603, 1617,
  603, 1617,
  606, 1615,
  603, 518,
  602, 518,
  602, 519,
  601, 519,
  602, 519,
  601, 520,
  600, 520,
  601, 1619,
  601, 1619,
  601, 520,
  600, 520,
  601, 1620,
  600, 520,
  600, 537,
  604
};

short AppleSelect[] =
{
  // ON, OFF (in microseconds)
  9052, 4455,
  566, 555,
  565, 1655,
  566, 1654,
  567, 1653,
  566, 555,
  565, 1657,
  563, 1655,
  566, 1654,
  566, 1654,
  566, 1655,
  565, 1655,
  565, 555,
  566, 555,
  565, 555,
  565, 556,
  565, 1656,
  564, 556,
  564, 557,
  563, 1657,
  564, 1657,
  563, 1657,
  563, 558,
  562, 1659,
  562, 558,
  602, 519,
  571, 1649,
  571, 1649,
  572, 549,
  571, 550,
  570, 1650,
  577, 544,
  570, 566,
  565
};

short AppleRight[] =
{
  // ON, OFF (in microseconds)
  9055, 4452,
  569, 551,
  570, 1651,
  569, 1651,
  569, 1651,
  570, 551,
  569, 1651,
  569, 1652,
  569, 1651,
  569, 1652,
  568, 1653,
  568, 1651,
  569, 552,
  568, 552,
  568, 552,
  569, 552,
  568, 1651,
  569, 552,
  569, 1651,
  569, 1652,
  569, 551,
  569, 552,
  568, 552,
  568, 553,
  568, 552,
  568, 553,
  567, 1653,
  568, 1652,
  568, 552,
  568, 553,
  568, 1681,
  539, 552,
  568, 569,
  571
};

short AppleLeft[] =
{
  // ON, OFF (in microseconds)
  9052, 4453,
  568, 552,
  568, 1652,
  568, 1652,
  568, 1652,
  569, 551,
  569, 1651,
  569, 1651,
  570, 1650,
  570, 1651,
  569, 1651,
  570, 1649,
  571, 550,
  571, 550,
  570, 550,
  592, 529,
  570, 1650,
  570, 1650,
  601, 520,
  600, 520,
  570, 1650,
  584, 537,
  569, 551,
  570, 551,
  569, 552,
  569, 551,
  569, 1652,
  568, 1651,
  569, 552,
  569, 551,
  569, 1650,
  570, 555,
  566, 566,
  564
};

short AppleUp[] =
{
  // ON, OFF (in microseconds)
  9027, 4455,
  567, 554,
  566, 1654,
  566, 1655,
  566, 1655,
  566, 554,
  566, 1655,
  565, 1655,
  566, 1654,
  566, 1654,
  567, 1655,
  565, 1656,
  564, 557,
  574, 547,
  573, 548,
  573, 547,
  573, 1648,
  572, 549,
  572, 1649,
  571, 550,
  571, 1650,
  570, 551,
  570, 551,
  569, 552,
  568, 553,
  568, 553,
  567, 1654,
  567, 1653,
  567, 554,
  567, 554,
  566, 1654,
  567, 554,
  566, 570,
  571,
};

short AppleDown[] =
{
  // ON, OFF (in microseconds)
  9055, 4428,
  603, 517,
  603, 1618,
  603, 1618,
  602, 1618,
  602, 519,
  602, 1619,
  601, 1619,
  601, 1620,
  601, 1620,
  600, 1621,
  569, 1652,
  568, 553,
  567, 554,
  567, 554,
  566, 554,
  566, 1655,
  566, 554,
  566, 555,
  565, 1656,
  565, 1657,
  563, 558,
  562, 558,
  563, 558,
  562, 559,
  572, 549,
  571, 1650,
  570, 1651,
  570, 551,
  569, 552,
  568, 1652,
  568, 556,
  565, 569,
  561,
};

short SamsungVolumeUp[] =
{
  // ON, OFF (in microseconds)
  4530, 4436,
  595, 1634,
  596, 1632,
  568, 1661,
  590, 524,
  596, 519,
  571, 543,
  567, 547,
  563, 551,
  570, 1659,
  571, 1658,
  562, 1666,
  565, 550,
  570, 544,
  566, 548,
  572, 543,
  568, 546,
  564, 1665,
  565, 1663,
  567, 1662,
  569, 545,
  565, 549,
  571, 544,
  566, 548,
  563, 551,
  569, 546,
  564, 550,
  570, 544,
  566, 1663,
  568, 1661,
  569, 1659,
  572, 1657,
  563, 1665,
  565
};

short SamsungVolumeDown[] =
{
  // ON, OFF (in microseconds)
  4501, 4466,
  567, 1661,
  568, 1661,
  569, 1660,
  570, 544,
  567, 547,
  563, 552,
  568, 546,
  564, 550,
  571, 1658,
  572, 1656,
  564, 1665,
  566, 548,
  572, 543,
  567, 547,
  564, 550,
  570, 545,
  565, 1663,
  567, 1662,
  569, 545,
  565, 1664,
  567, 547,
  563, 551,
  569, 546,
  564, 550,
  571, 543,
  567, 548,
  572, 1657,
  564, 550,
  570, 1658,
  572, 1684,
  537, 1664,
  566, 1663,
  570
};

short SamsungLeft[] = {4500,  4466,   565,    1663,   567,    1662,   569,    1659,   571,    570,    540,    574,    536,    579,    541,    573,    537,    577,    544,    1658,   572,    1657,   563,    1665,   565,    576,    545,    569,    541,    574,    536,    578,    542,    572,    538,    1664,   567,    574,    536,    1666,   564,    577,    544,    570,    540,    1662,   568,    1660,   570,    571,    540,    574,    546,    1657,   563,    577,    543,    1659,   572,    1657,   563,    578,    542,    572,    538,    1664,   566};
short SamsungRight[] = { 4504,    4461,   570,    1659,   571,    1657,   563,    1666,   564,    550,    621,    494,    616,    498,    627,    488,    567,    546,    564,    1665,   565,    1663,   567,    1661,   569,    546,    565,    550,    570,    544,    617,    498,    571,    542,    568,    565,    545,    1665,   565,    549,    571,    543,    575,    540,    573,    1655,   565,    1663,   567,    548,    572,    1656,   564,    551,    573,    1655,   572,    1656,   574,    1655,   565,    549,    571,    544,    617,    1612,   568};
short SamsungUp[] = {4499,    4468,   562,    1666,   565,    1664,   566,    1662,   568,    547,    563,    551,    569,    545,    565,    550,    571,    543,    566,    1663,   568,    1660,   570,    1659,   571,    543,    567,    547,    573,    542,    568,    546,    564,    550,    570,    544,    566,    549,    572,    542,    568,    546,    564,    551,    569,    1659,   571,    1658,   572,    542,    568,    1661,   569,    1659,   571,    1658,   562,    1666,   565,    1664,   566,    548,    572,    542,    568,    1661,   569};
short SamsungDown[] = {4504,  4462,   569,    1660,   570,    1658,   573,    1656,   564,    550,    570,    545,    565,    549,    571,    543,    567,    547,    563,    1666,   564,    1664,   567,    1662,   568,    546,    564,    551,    569,    545,    565,    549,    571,    544,    566,    1662,   569,    572,    538,    550,    570,    544,    566,    575,    545,    1657,   563,    1666,   565,    575,    545,    570,    540,    1662,   568,    1660,   570,    1659,   572,    1656,   564,    577,    543,    572,    538,    1664,   566};
short SamsungOK[] = {4501,    4465,   566,    1663,   567,    1662,   568,    1660,   571,    544,    566,    548,    572,    542,    568,    547,    563,    551,    570,    1658,   572,    1657,   563,    1666,   564,    550,    571,    543,    567,    548,    562,    552,    568,    546,    564,    551,    570,    544,    566,    548,    572,    1657,   563,    551,    570,    1659,   571,    1657,   563,    552,    568,    1660,   571,    1658,   572,    1656,   564,    551,    569,    1659,   572,    543,    567,    573,    537,    1665,   565};
short SamsungPlay[] = {4501,  4466,   565,    1663,   567,    1662,   568,    1660,   571,    544,    566,    548,    572,    542,    568,    547,    563,    551,    569,    1660,   570,    1658,   573,    1656,   564,    550,    571,    544,    565,    549,    571,    543,    567,    548,    562,    1666,   565,    1664,   566,    1662,   568,    547,    563,    551,    569,    545,    565,    1664,   567,    547,    573,    542,    568,    546,    564,    550,    570,    1659,   571,    1658,   563,    1665,   565,    550,    570,    1658,   572};
short SamsungStop[] = {4501,  4466,   565,    1664,   568,    1661,   567,    1662,   568,    546,    564,    553,    568,    544,    566,    548,    572,    543,    567,    1661,   569,    1660,   570,    1658,   572,    543,    568,    546,    564,    550,    570,    545,    570,    544,    571,    543,    567,    1662,   568,    1661,   569,    545,    565,    549,    572,    543,    567,    1661,   569,    546,    564,    1664,   566,    549,    571,    543,    570,    1659,   569,    1659,   571,    1658,   562,    552,    568,    1661,   570};
short SamsungTools[] { 4502, 4463, 568, 1660, 570, 1658, 572, 1657, 563, 551, 570, 544, 566, 548, 572, 542, 619, 496, 624, 1604, 565, 1663, 567, 1661, 570, 544, 566, 548, 572, 542, 568, 546, 574, 541, 569, 1659, 571, 1657, 573, 541, 569, 1659, 572, 542, 571, 543, 574, 1654, 566, 549, 571, 543, 567, 547, 573, 1655, 566, 548, 572, 1656, 574, 1654, 566, 549, 571, 1657, 573};

//#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x]))))
#define COUNT_OF(array) (sizeof(array)/sizeof(*(array)))

Command *commands[16];
int commands_length = 0;
bool initialized = false;

void add_command(IR_Command comm,  short *array, const int size, const char *name)
{
  Command *command = new Command;
  command->command = comm;
  command->blinks = array;
  command->blinks_length = size;
  command->name = name;
  commands[commands_length++] = command;
}



void init()
{
  if (initialized) return;
  initialized = true;

  add_command(IR_Command::APPLE_PLAY, ApplePlay, COUNT_OF(ApplePlay), "ApplePlay");
  add_command(IR_Command::APPLE_MENU, AppleMenu, COUNT_OF(AppleMenu), "AppleMenu");
  add_command(IR_Command::APPLE_SELECT, AppleSelect, COUNT_OF(AppleSelect), "AppleSelect");
  add_command(IR_Command::APPLE_UP, AppleUp, COUNT_OF(AppleUp), "AppleUp");
  add_command(IR_Command::APPLE_DOWN, AppleDown, COUNT_OF(AppleDown), "AppleDown");
  add_command(IR_Command::APPLE_LEFT, AppleLeft, COUNT_OF(AppleLeft), "AppleLeft");
  add_command(IR_Command::APPLE_RIGHT, AppleRight, COUNT_OF(AppleRight), "AppleRight");

  add_command(IR_Command::SAMSUNG_VOLUME_UP, SamsungVolumeUp, COUNT_OF(SamsungVolumeUp), "SamsungVolumeUp");
  add_command(IR_Command::SAMSUNG_VOLUME_DOWN, SamsungVolumeDown, COUNT_OF(SamsungVolumeDown), "SamsungVolumeDown");

  add_command(IR_Command::SAMSUNG_UP, SamsungUp, COUNT_OF(SamsungUp), "SamsungUp");
  add_command(IR_Command::SAMSUNG_DOWN, SamsungDown, COUNT_OF(SamsungDown), "SamsungDown");
  add_command(IR_Command::SAMSUNG_LEFT, SamsungLeft, COUNT_OF(SamsungLeft), "SamsungLeft");
  add_command(IR_Command::SAMSUNG_RIGHT, SamsungRight, COUNT_OF(SamsungRight), "SamsungRight");
  add_command(IR_Command::SAMSUNG_OK, SamsungOK, COUNT_OF(SamsungOK), "SamsungOK");
  add_command(IR_Command::SAMSUNG_PLAY, SamsungPlay, COUNT_OF(SamsungPlay), "SamsungPlay");
  add_command(IR_Command::SAMSUNG_STOP, SamsungStop, COUNT_OF(SamsungStop), "SamsungStop");
  add_command(IR_Command::SAMSUNG_TOOLS, SamsungTools, COUNT_OF(SamsungTools), "SamsungTools");


}

int my_abs(const int a)
{
  if (a < 0) return -a;
  return a;
}

int my_min (const int a, const int b)
{
  return !(b < a) ? a : b; // or: return !comp(b,a)?a:b; for version (2)
}

const IR_Command identify_command(const int *blinks, int num_blinks)
{
  init();
  if (num_blinks < 10) return IR_Command::NO_COMMAND;
  //Serial.println("Identifying. ");
  for (unsigned int i = 0; i < commands_length; ++i)
  {
    Command *command = commands[i];
    bool matching = true;
    //Serial.println(command->name);
    for (int i = 0; i < my_min(num_blinks, command->blinks_length) - 1; i++)
    {
      /*Serial.print(blinks[i], 10);
      Serial.print("\t");
      Serial.print(command->blinks[i], 10);
      Serial.println("") ; */
       if (my_abs(blinks[i] - command->blinks[i]) > 100)
      {
        matching = false;
        //Serial.println("NO MATCH");
        break;
      }
    }
    //Serial.println("MATCH ");
    if (matching) return command->command;
  }
  return IR_Command::NO_COMMAND;
}

const Command *get_command(IR_Command command)
{
  for (unsigned int i = 0; i < commands_length; ++i)
  {
    Command *c = commands[i];
    if (c->command == command) return c;
  }
  return NULL;
}
