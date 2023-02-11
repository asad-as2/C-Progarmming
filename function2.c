#include<stdio.h>
void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum of %d and %d =%d",a,b,sum);
}
void main()
{
    int m,n;
    printf("Enter two values=");
    scanf("%d%d",&m,&n);
    sum(m,n);
}
