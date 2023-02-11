//WAP in C to print the factorial of a given number using recurssion.
#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    factorial(n);
    printf("The factorial of %d = %d",n,factorial(n));
    return 0;
}
int factorial(int a)
{
    if(a==0)
    return 1;
    else
    return a*factorial(a-1);
}