#include<stdio.h>
int main(){
    int Marks;
    printf("Enter Marks:");
    scanf("%d",&Marks);

    if(Marks>=90)
    printf("A Grade");
    else if(Marks>75)
       printf("B Grade");
    else if(Marks>60)
    printf("C Grade");
    else if(Marks>=40)
    printf("D Grade");
    else
    printf("Fail");
    

    return 0;
}