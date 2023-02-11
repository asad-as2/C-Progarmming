#include<stdio.h>
void main()
{
int a,b;
printf("Enter first no=");
scanf("%d",&a);
printf("Enter second no=");
scanf("%d",&b);
a=a^b;
b=a^b;
a=a^b;
printf("a after swapping=%d\n",a);
printf("b after swapping=%d",b);
}