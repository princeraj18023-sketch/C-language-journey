#include <stdio.h>

int main()
{
    printf("\n\n********Decision Making in C********\n\n");
    int age;
    printf("Enter Your age\n");
    scanf("%d", &age);
    if (age < 13)
    {
        printf("Kids Mode: Only 1 hour of playtime allowed.\n");
    }
    else if (age >= 13 && age < 18)
    {
        printf("teen Mode: Parental guidance recommended.\n");
    }
    else
    {
        printf("Adult Mode: Full access, no time restrictions.\n");
    }

    
    int i3 = age>5?100:300;
    printf("%d", i3);
    return 0;
}