//WAP in C to input the name and display as it is using gets and puts.
#include<stdio.h>
int main()
{
char a[50];
printf("Enter your name : ");
gets(a);
printf("Your name is : ");
puts(a);
return 0;
}