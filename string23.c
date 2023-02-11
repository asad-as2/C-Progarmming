// WAP in C to check whether a string is palindrome or not by using built in function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter the string : ");
    gets(a);
    if(strcmpi(a,strrev(a))==0)
    printf("Given string is a palindrome");
    else
    printf("Given string is not a palindrome");
    return 0;
}

//This program is not working.