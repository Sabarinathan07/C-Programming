#include<stdio.h>
int main(){
    unsigned char data =  0xa;
    
    unsigned char bit_1 = (data >> 1) & 1;
    printf("%2x", data);
    unsigned char bit_2 = (data >> 1) & 1;
    printf("%2x", data);
    printf("%2x", bit_1);
    printf("%2x", bit_2);
    // printf("%2x", bit_2);
    unsigned char xor_of_bit = bit_1 ^ bit_2;
    printf("After swapping %2x \n\n", data ^ (xor_of_bit << 1 | xor_of_bit << 2));
    return 0;
}
