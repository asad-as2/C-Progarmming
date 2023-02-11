// WAP in C to print the address of variables in hexadecimal form (pointres address)
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);
    printf("The address of a and b in hexadecimal form = %x and %x",&a,&b);
    printf("\nThe value of a and b = %d and %d",a,b);
    return 0;
}