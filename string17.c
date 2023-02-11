// WAP in C to convert a string into lower case.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter string in capital letters : ");
    gets(a);
    printf("string in lower case : %s",strlwr(a));
    return 0;
}