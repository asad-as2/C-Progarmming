// WAP in C to convert a string into lower case without using built in function.
#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter string in capital letters : ");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]+32;
    }
    printf("String in lower case : %s",a);
    return 0;
}