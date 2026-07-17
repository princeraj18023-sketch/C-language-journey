#include<stdio.h>

void newPrint(char * char1)
{
    printf("The value is %s\n", char1);
}

int sum(int a, int b){
    return a+b;
}
float average(float a, float b){
    return (a+b)/2;
}
int main()
{
    newPrint("Hello world");
    printf("The sum of 100 and 299 is %d\n", sum(100, 299));
    printf("The average of 100 and 299 is %f\n", average(100, 299));
    return 0;
}