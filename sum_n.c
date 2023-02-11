#include<stdio.h>
int main()
{
int a,sum=0,i;
printf("Enter the number where u want to sum up n numbers=");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    sum=sum+i;
}
printf("The sum of numbers is=%d",sum);
return 0;
}