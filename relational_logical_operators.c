#include <stdio.h>

int main()
{
    int prince = 8, rohan = 63;

    printf("%d\n", prince == rohan);
    printf("%d\n", prince != rohan);
    printf("%d\n", prince > rohan);
    printf("%d\n", prince < rohan);


    int h = 0, p = 1;

    printf("The logical operator returned %d\n", h && p);
    printf("The logical operator returned %d\n", h || p);
    printf("The logical operator returned %d\n", !h);
    printf("The logical operator returned %d\n", !p);
    return 0;
}