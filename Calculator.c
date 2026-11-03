#include<stdio.h>
int main()
{
    int a, b, ch;
    scanf("%d%d%d",&a,&b,&ch);

    switch(ch)
{
    case1 :
       printf("%d",a-b);
       break;
    case2 :
         printf("%d",a+b);
         break;
    case3 :
        printf("%d", a*b);
        break;
    case4 :
        if(b!=0)
        printf("%d", a/b);
        else
        printf("Division immpossible");
        break;
        default:
        printf("Invalid choice");
}
        return 0;
}
