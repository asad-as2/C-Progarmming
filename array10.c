//Program to find sum of even numbers and product of odd numbers.
#include<stdio.h>
int main()
{
int size;
printf("Enter the size of an array=");
scanf("%d",&size);
int a[size],n,sum=0,pro=1,i;
for(i=0;i<size;i++)
{
    printf("Enter the element = ");
    scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
    if(a[i]%2==0)
    sum=sum +a[i];
    else
    pro=pro*a[i];
}
printf("Sum of even numbers = %d\nProduct of odd numbers = %d",sum,pro);
return 0;
}