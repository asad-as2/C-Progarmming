// WAP in C to find the length of a given string by using strlen() function .
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter the string : ");
    gets(a);
    printf("The length of a given string : %d",strlen(a));
return 0;
}