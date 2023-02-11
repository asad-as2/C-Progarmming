//WAP in C to check whether a given string is a palindrome or not without using built in function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50],c=0;
    printf("Enter the string : ");
    gets(a);
    int i,j=0,flag=0;
    for(i=0;a[i]!='\0';i++)       //for find the length.
    c++;
    for(i=c-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]!=b[i])    //agr ek bhi character alg hua toh break ho jaye aange poore ko check krne ki jroort.
    flag=1;
    break;
    }
    if(flag==0)
    printf("Given string is a palindrome");
    else
    printf("Given string is not a palindrome");
    return 0;
}