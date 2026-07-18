#include<stdio.h>

int main()
{
    int a =56;
    printf("%d\n", a);
    int* ptr = NULL;
    if (!ptr)
    {
        printf("Pointer is not null");
    }
    
    ptr = &a;
    *ptr = 183;
    printf("%d", a);

    return 0;
}