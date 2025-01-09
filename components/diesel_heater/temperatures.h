#pragma once

#include <vector>
#include <tuple>

// This is a lookup table for the temperature values that the diesel heater can return.
// The first two values are the range of the temperature value, the third value is the actual temperature.
// The temperature is in degrees Celsius.
static const std::vector<std::tuple<int,int,int>> temperatureLookup = {
    {64, 69, 2},
    {70, 76, 4},
    {77, 84, 6},
    {85, 91, 8},
    {92, 100, 10},
    {101, 109, 12},
    {110, 119, 14},
    {120, 129, 16},
    {130, 139, 18},
    {140, 151, 20},
    {152, 164, 22},
    {164, 175, 24},
    {176, 189, 26},
    {190, 203, 28},
    {204, 217, 30},
    {218, 231, 32},
    {232, 247, 34},
    {248, 262, 36},
    {263, 279, 38},
    {280, 295, 40},
    {296, 312, 42},
    {313, 330, 44},
    {331, 348, 46},
    {349, 365, 48},
    {366, 384, 50},
    {385, 402, 52},
    {403, 420, 54},
    {421, 439, 56},
    {440, 457, 58},
    {458, 475, 60},
    {476, 493, 62},
    {494, 511, 64},
    {512, 529, 66},
    {530, 547, 68},
    {548, 564, 70},
    {565, 581, 72},
    {582, 598, 74},
    {599, 614, 76},
    {615, 630, 78},
    {631, 646, 80},
    {647, 661, 82},
    {662, 676, 84},
    {677, 690, 86},
    {691, 704, 88},
    {705, 717, 90},
    {718, 730, 92},
    {731, 743, 94},
    {744, 755, 96},
    {756, 766, 98},
    {767, 778, 100},
    {779, 788, 102},
    {789, 798, 104},
    {799, 808, 106},
    {809, 817, 108},
    {818, 826, 110},
    {827, 835, 112},
    {836, 843, 114},
    {844, 851, 116},
    {852, 859, 118},
    {860, 866, 120},
    {867, 873, 122},
    {874, 879, 124},
    {880, 886, 126},
    {887, 892, 128},
    {893, 897, 130},
    {898, 903, 132},
    {904, 908, 134},
    {909, 913, 136},
    {914, 918, 138},
    {919, 922, 140},
    {923, 926, 142},
    {927, 931, 144},
    {932, 934, 146},
    {935, 938, 148},
    {939, 942, 150},
    {943, 945, 152},
    {946, 948, 154},
    {949, 951, 156},
    {952, 954, 158},
    {955, 957, 160},
    {958, 960, 162},
    {961, 962, 164},
    {963, 965, 166},
    {966, 967, 168},
    {968, 969, 170},
    {970, 971, 172},
    {972, 973, 174},
    {974, 975, 176},
    {976, 977, 178},
    {978, 979, 180},
    {980, 981, 182},
    {982, 982, 184},
    {983, 984, 186},
    {985, 985, 188},
    {986, 987, 190},
    {988, 988, 192},
    {989, 989, 194},
    {990, 990, 196},
    {991, 992, 198},
    {993, 993, 200},
    {994, 994, 202},
    {995, 995, 204},
    {996, 996, 206},
    {997, 997, 208},
    {998, 998, 210},
    {999, 999, 212},
    {1000, 1000, 216},
    {1001, 1001, 218},
    {1002, 1002, 220},
    {1003, 1003, 224},
    {1004, 1004, 226},
    {1005, 1005, 230},
    {1006, 1006, 232},
    {1007, 1007, 236},
    {1008, 1008, 240},
    {1009, 1009, 244},
    {1010, 1010, 250},
    {1011, 1011, 254},
    {1012, 1012, 260},
    {1013, 1013, 266},
    {1014, 1014, 272},
    {1015, 1015, 280},
    {1016, 1016, 290}
};


inline int get_temperature(int value) {
    for (const auto& [min, max, temp] : temperatureLookup) {
        if (value >= min && value <= max) {
            return temp;
        }
    }
    return 0;
}

inline int get_value(int temperature) {
    for (const auto& [min, max, temp] : temperatureLookup) {
        if (temp == temperature) {
            return min;
        }
    }
    return 0;
}