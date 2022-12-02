#include <stdio.h>
#include <assert.h>

// 奇校验位
int odd_ones(unsigned x){
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;                                                                                                                                                     
    x ^= x >> 2;
    x ^= x >> 1;
    x &= 0x1;
    return x;
}

int main(int argc, char* argv[]) {
    int i = odd_ones(0x10101011);
    printf("%d", i);
    // assert(odd_ones(0x10101011));
    // assert(!odd_ones(0x01010101));
    return 0;
}
