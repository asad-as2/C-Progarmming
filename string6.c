//WAP in C to count total number of character(space also a character).
#include<stdio.h>
int main()
{
char a[50];
int i,count=0;
printf("Enter your name : ");
gets(a);
for(i=0;a[i];i++)                                 //for(i=0;a[i]!='\0';i++)
count++;
printf("Total number of character is = %d",count);
return 0;
}