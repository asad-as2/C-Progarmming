// WAP in C to convert lower case into upper csae using built in function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter string in lower csae : ");
    gets(a);
    printf("String in upper case : %s",strupr(a));
    return 0;
}