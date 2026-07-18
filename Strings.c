#include<stdio.h>
#include<string.h>

int main ()
{
    char name[3] = {'m', 'y', '\0'};
    char str1[54], str2[46], str3[75];
    strcpy(str1, "Prince");
    strcpy(str2, "Khushi");
    strcat(str1, str2);
    printf("%d", strcmp(str1, str2));

    return 0;
}