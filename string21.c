// WAP in C to reverse a string using built in function .
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter the string : ");
    gets(a);
    printf("The reverse of a string : %s",strrev(a));
    return 0;
}