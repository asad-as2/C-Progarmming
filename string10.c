//WAP in C to copy a string.
#include<stdio.h>
int main()
{
int i;
char a[100],b[100];
printf("Enter the string: ");
gets(a);
for(i=0;a[i]!='\0';i++)
b[i]=a[i];
b[i]='\0';
printf("Copied string is: %s",b);
return 0;
}