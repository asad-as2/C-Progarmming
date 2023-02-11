#include<stdio.h>
int main()
{
int i,n,rem;
printf("Enter the number=");
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
    rem=i%10;
    printf("%d\n",rem);
}
return 0;
}