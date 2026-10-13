#include<stdio.h>

int main(){
    int i =1;
    while ( i <= 10 )
    {
       printf("\nwelcome in while loop");
       printf("\n%d", i);
       i = i+1;
    }
    printf("\noutside the while loop");
    return 0;
}