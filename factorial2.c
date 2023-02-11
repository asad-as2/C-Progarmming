#include<stdio.h>
int main()
{
int i,j,a,fac=1;
printf("Enter the no=");
scanf("%d",&a);
for(i=a;i>=1;i--)
{
    fac=fac*i;
}
printf("The factorial is=%d",fac);
return 0;
}