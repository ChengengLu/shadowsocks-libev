#include "consts.h"

const unsigned char ROTB[16] = {0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08};
const unsigned char M0[16]   = {0x0f, 0x0b, 0x07, 0x03, 0x0e, 0x0a, 0x06, 0x02, 0x0d, 0x09, 0x05, 0x01, 0x0c, 0x08, 0x04, 0x00};
const unsigned char EXPB0[16] = {0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x0b, 0x0b, 0x0b, 0x0b, 0x0f, 0x0f, 0x0f, 0x0f};

const unsigned char SWAP32[16] = {0x03, 0x02, 0x01, 0x00, 0x07, 0x06, 0x05, 0x04, 0x0b, 0x0a, 0x09, 0x08, 0x0f, 0x0e, 0x0d, 0x0c};
const unsigned char M0SWAP[16] = {0x0c, 0x08, 0x04, 0x00, 0x0d, 0x09, 0x05, 0x01, 0x0e, 0x0a, 0x06, 0x02, 0x0f, 0x0b, 0x07, 0x03};
const unsigned char SR[16] = {0x01, 0x02, 0x03, 0x00, 0x06, 0x07, 0x04, 0x05, 0x0b, 0x08, 0x09, 0x0a, 0x0c, 0x0d, 0x0e, 0x0f};
const unsigned char SRM0[16] = {0x0f, 0x0a, 0x05, 0x00, 0x0e, 0x09, 0x04, 0x03, 0x0d, 0x08, 0x07, 0x02, 0x0c, 0x0b, 0x06, 0x01};

const int128 BS0 = {{0x5555555555555555ULL, 0x5555555555555555ULL}};
const int128 BS1 = {{0x3333333333333333ULL, 0x3333333333333333ULL}};
const int128 BS2 = {{0x0f0f0f0f0f0f0f0fULL, 0x0f0f0f0f0f0f0f0fULL}};
