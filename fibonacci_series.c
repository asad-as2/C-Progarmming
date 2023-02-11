#include<stdio.h>
int main()
{
int n,a=0,b=1,sum;
printf("Enter the no. of term =");
scanf("%d",&n);
printf("%d %d ",a,b);
for(int i=1;i<=(n-2);i++)
{
    sum=a+b;
    a=b;
    b=sum;
    printf("%d ",b);
}
return 0;
}