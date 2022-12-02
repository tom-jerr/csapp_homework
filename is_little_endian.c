#include <stdio.h>
#include <assert.h>
typedef unsigned char* byte_pointer;

int is_little_endian(){
    int num = 0xff;
    byte_pointer p = (byte_pointer) &num;
    if (*p == 0xff) return 1;
    return 0;
}

int main(int argc, char* argv[]) {
    assert(is_little_endian());
    return 0;
}

