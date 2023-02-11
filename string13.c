// WAP in C to concatenate two string by using concatenate function.c
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[50];
    printf("Enter the first string : ");
    gets(a);
    printf("Enter the second string : ");
    gets(b);
    printf("Concatenate string is : %s",strcat(a,b));
return 0;
} 