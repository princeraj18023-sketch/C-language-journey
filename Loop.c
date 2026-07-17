#include <stdio.h>

int main()
{
    printf("\n\n********Loop in C********\n\n");

    int index = 0;

    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }

    for (int j = 0; j < 46; j++)
    {
        printf("%d\n", j);
    }

    int j = 0;
    do
    {
        printf("do while loop is running");

    } while (j > 65656);

    return 0;
}