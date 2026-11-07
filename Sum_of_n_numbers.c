#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the last natural number:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of %d natural numbers is : %d\n", n, sum);
    return 0;
}