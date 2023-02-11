// WAP in C to reverse a string without using built in function .
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[50],b[50];
    printf("Enter the string : ");
    gets(a);
    j=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
    b[j]=a[i];
    j++;
    }
    b[j]='\0';
    printf("The reverse of string : %s",b);
    return 0;
}