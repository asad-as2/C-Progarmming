#include<stdio.h>
#include<math.h>
int main()
{
int n,rem,i,sum=0,count=0;
printf("Enter the binary digit =");
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
rem=i%10;
sum=sum+pow(2,count)*rem;
count+=1;
}
printf("%d",sum);
return 0;
}