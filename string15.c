// WAP in C to compare two string by using string function (sensitive case).
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter the first string : ");
    gets(a);
    printf("Enter the second string : ");
    gets(b);
    if(strcmp(a,b)==0)
    printf("Equal strings");
    //else if(strcmp(a,b)>0)
    //printf("First string is greater");
    //else
    //printf("Second string is greater");
    else
    printf("Unequal string");
return 0;
}