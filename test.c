// C program to swap bits in an integer
#include<stdio.h>
 
// This function swaps bit at positions p1 and p2 in an integer n
int swapBits(unsigned int n, unsigned int p1, unsigned int p2)
{
    /* Move p1'th to rightmost side */
    unsigned int bit1 =  (n >> p1) & 1;
    printf("%d", bit1);
    /* Move p2'th to rightmost side */
    unsigned int bit2 =  (n >> p2) & 1;
    printf("%d", bit2);
    printf("\n number is %d \n", n);

    /* XOR the two bits */
    unsigned int x = (bit1 ^ bit2);
 
    /* Put the xor bit back to their original positions */
    x = (x << p1) | (x << p2);
    printf("%d", x);
 
    /* XOR 'x' with the original number so that the
       two sets are swapped */
    unsigned int result = n ^ x;

    return result;
}

/* Driver program to test above function*/
int main()
{
    int res =  swapBits(28, 1, 2);
    printf("Result = %d ", res);
    return 0;
}