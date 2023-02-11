#include<stdio.h>
int main()
{
int i,a,sum=0;
printf("Enter the number=");
scanf("%d",&a);
for(i=a;i>0;i/=10)
{
    sum=(sum*10)+(i%10);
}
if(sum==a)
printf("The number is palindrome");
else
printf("The number is not palindrome");
return 0;
}