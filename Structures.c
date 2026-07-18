#include<stdio.h>
#include<string.h>
struct Books{
    char name[60];
    char author[40];
    int price;
}Book;

void printStruct(struct Books bk){
    printf("book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book Price is %d\n", bk.price);
}
int main ()
{
    struct Books bk1, bk2;  
    strcpy(bk1.name, "Mathematics");
    strcpy(bk1.author, "Ramanujam");
    bk1.price = 89;  

    printStruct(bk1);
    return 0;
}    