#include <stdio.h>

int main()
{
    int i, n, flag = 0;
    printf("Enter the number");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Given number is prime");
    }
    else
        printf("Given number is not prime");

    return 0;
}