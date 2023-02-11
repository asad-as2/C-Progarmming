#include<stdio.h>
void main()
{
int a,b,c=0;
printf("Enter two no=");
scanf("%d%d",&a,&b);
while(a)
{
c += b;
a--;
}
printf("%d",c);
}