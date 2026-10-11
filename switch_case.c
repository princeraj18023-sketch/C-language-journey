#include <stdio.h>
#include<conio.h>
void main()
{
    int choice;
    printf("\n Enter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("\n Monday ");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        default:printf("\n invalid choice");
    }
        getch();
}
    

