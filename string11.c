// WAP in C to Concatenate two strings into one string.
#include<stdio.h>
int main()
{
char a[50],b[50],c[100];
int i,j;
printf("Enter the first string: ");
gets(a);
printf("Enter the second string: ");
gets(b);
for(i=0;a[i]!='\0';i++)
c[i]=a[i];
for(j=0;b[j]!='\0';j++)
{
c[i]=b[j];
i++;
}
c[i]='\0';
printf("Concatenate string is : %s",c);
return 0;
}