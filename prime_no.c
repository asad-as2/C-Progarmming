#include<stdio.h>
int main()
{
int i,n,count=0;
printf("Enter the number = ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    count=count+1;
}
if(n>1)
{
if(count==0)
printf("%d is a prime number",n);
else
printf("%d is not a prime number",n);
}
else
printf("%d is not a prime number",n);
return 0;
}