#include<stdio.h>
int main()
{
int n,i,a=1,b=2;
printf("Enter the number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d ",a);
    a=a+2;
    printf("%d ",b);
    b=b+2;
    printf("%d ",b);
    b=b+2;
}
return 0;
}