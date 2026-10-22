#include<stdio.h>
int takenumber(){
    int i;
    printf("Enter a number :");
    scanf("%d",&i);
    return i;
}
int main(){
    int a;
    a = takenumber();
    printf("you entered :%d\n", a);
    return 0;
}
