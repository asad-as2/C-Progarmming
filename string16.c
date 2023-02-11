// WAP in C to compare two strings by using string function (non sensitive case).
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter the first string : ");
    gets(a);
    printf("Enter the second string : ");
    gets(b);
    if(strcmpi(a,b)==0)
    printf("Equal strings");
    else
    printf("Unequal strings");
return 0;
} 