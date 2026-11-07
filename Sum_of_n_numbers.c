#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the last natural number:");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("The sum of %d natural numbers is : %d\n", num, sum);
    return 0;
}