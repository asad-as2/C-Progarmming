//WAP in C to check a number is prime or not by using function.
#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the the number = ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int x)
{
    int i,count=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        count++;
    }
    if(x==1)
    printf("1 is not a prime number");
    else if(count>=1)
    printf("The number is not a prime number");
    else
    printf("The number is a prime number");
}