#include <stdio.h>

int main()
{
    int n = 43;
    int isprime = 1;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime)
    {
        printf("The number %d is prime number", n);
    }
    else
    {
        printf("The number %d is not a prime number", n);
    }

    return 0;
}