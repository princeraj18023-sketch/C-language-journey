#include<stdio.h>
void printHashtag(int n)
{
    for(int i = 0; i<n; i++){
    printf("%C\n",'#');
    }
}
int main(){
    printHashtag(5);
    return 0;
}