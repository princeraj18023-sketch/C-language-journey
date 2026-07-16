#include <stdio.h>

int main()
{
    printf("\n\n********taking input from user in C********");

    int princeInput;
    printf("\n Please enter the value of princeInput");
    scanf("%d", &princeInput);
    printf("\n You Entered %f as princeInput", (float)princeInput);

    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\n num1/num2 is %f", (float)num1 / num2);
    return 0;
}
