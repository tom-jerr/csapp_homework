#include <stdio.h>
#include <assert.h>

int int_shifts_are_arithmetic(){
    int num = -1;
    return ((num & (num >> 1)) >> ((sizeof(int) << 3) - 1));    //右移后与原数字取交后判断首位
}

int main(int argc, char* argv[]) {
    assert(int_shifts_are_arithmetic());
    return 0;
}