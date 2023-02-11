#include<stdio.h>
#include<math.h>
int main()//153,370,371,407 are strong numbers.
{
    int count=0,sum=0,o,rem,m,n;
    printf("Enter the number = ");
    scanf("%d",&n);
    m=n;
    o=m;
    while(n>0)
    {
        n/=10;
        count+=1;
    }
    while(m>0)
    {
        rem=m%10;
        sum=sum+pow(rem,count);
        m/=10;
    }
    if(sum==o)
    printf("Armstrong");
    else
    printf("Not");
return 0;
}