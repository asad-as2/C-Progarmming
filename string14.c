// WAP in C to copy a string by using string function .
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter the string : ");
    gets(a);
    strcpy(b,a);
    printf("The copied string is : %s",b);
return 0;
}