#include <stdio.h>

int main()
{
    int A = 50, B = 16;
    printf("Bitwise operator returned %d\n", A&B);
    printf("Bitwise operator returned %d\n", A|B);
    printf("Bitwise operator returned %d\n", A^B);
    printf("Bitwise operator returned %d\n", ~B);
    printf("Bitwise operator returned %d\n", A<<B);
    printf("Bitwise operator returned %d\n", A>>B);
    return 0;
}