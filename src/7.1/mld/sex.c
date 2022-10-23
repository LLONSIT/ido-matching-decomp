#include "sex.h"

// Write to a word and read as a byte to determine host endian
int gethostsex(void) {
    // Not typedefing this since only used once
    union {
        int word;
        signed char byte;
    } sex;

    sex.word = 1;
    if (sex.byte == 1) {
        return LITTLEENDIAN;
    } else {
        return BIGENDIAN;
    }
}
