#include<stdio.h>
int main(){
    int i = 1;
    do{
        printf("\nwelcome in do while loop");
        printf("\n%d", i);
        i++;
    }while(i<=10);
    printf("\noutside the do-while loop");
    return 0;
}