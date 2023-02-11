#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("Press 1: for money withdraw and for check balance=");
scanf("%d",&c);
if(c==1)
{
    printf("Enter how much money you want to withdraw=");
    scanf("%d",&a);
    printf("%d Money is withdraw sucessfully",a);
    printf("\nPress 2 for check balance=");
    scanf("%d",&e);
    if(e==2)
    {
    printf("Enter your pin to check your balance=");
    scanf("%d",&b);
    d=99000-a;
    printf("Your remaining balance is %d",d);
    }
}     
else
{
    printf("Invalid choice");
}
}