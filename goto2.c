#include<stdio.h>
int main()
{
int a;
printf("Enter Number:");
scanf("%d",&a);
if(a%2==0)
goto even;
else
goto odd;
even:
printf("Number is Even");
return 0;
odd:
printf("Number is odd");
return 0;
}