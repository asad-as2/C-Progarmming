// WAP in C to convert lower case into upper case without using built in function .
#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter the string in small letters : ");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    if(a[i]>='a' && a[i]<='z')
    a[i]=a[i]-32;
    printf("In upper case string : %s",a);
    return 0;
}