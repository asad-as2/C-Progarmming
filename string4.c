//WAP in C to input the name and display as it is using gets and printf.
#include<stdio.h>
int main()
{
char a[50];
printf("Enter your name : ");
gets(a);
printf("Your name is : %s",a);
return 0;
}