#include <stdio.h>
#include <assert.h>

int leftmost_one(unsigned x){
    /*
    * first, generate a mask that all bits after leftmost one are one
    * e.g. 0xFF00 -> 0xFFFF, and 0x6000 -> 0x7FFF
    * If x = 0, get 0
    */

    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;

    return (x >> 1) + (x & 1);
}

int main(int argc, char* argv[]) {
    assert(leftmost_one(0xFF00) == 0x8000);
    assert(leftmost_one(0x6000) == 0x4000);
    assert(leftmost_one(0x0) == 0x0);
    assert(leftmost_one(0x80000000) == 0x80000000);
    return 0;
}
