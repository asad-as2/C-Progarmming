#include<stdio.h>
int main()
{
int sum=0,i;
printf("Enter the number=");
scanf("%d",&i);
for(i;i>0;i%10)
{
    sum=sum+i%10;
    i=i/10;
}
printf("the sum of the number is=%d",sum);
return 0;
}