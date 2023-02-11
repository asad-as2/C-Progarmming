//Program to find the sum of array elements.
#include<stdio.h>
int main()
{
int sum=0,i,j;
printf("Enter the size of array = ");
scanf("%d",&i);
int a[i];
for(j=0;j<i;j++)
{
    printf("Enter the arrays elements =");
    scanf("%d",& a[i]);
    sum=sum+a[i];
}
printf("The sum of arrays elements are = %d",sum);
return 0;
}