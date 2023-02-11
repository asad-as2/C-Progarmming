#include<stdio.h>
int main()//1,2,145,40585 are strong numbers.
{
int sum=0,n,fac,rem,m;
printf("Enter the number =");
scanf("%d",&n);
m=n;
while(n>0)
{
    rem=n%10;
    n/=10;fac=1;
    while(rem>0)
    {
        fac=fac*rem;
        rem-=1;
    }
    sum=sum+fac;
}
if(sum==m)
printf("Strong number");
else
printf("Not");
return 0;
}