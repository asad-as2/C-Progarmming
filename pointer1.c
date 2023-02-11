//WAP in C to print the sum of two numbers using pointer.
#include<stdio.h>
int main()
{
    int a,b,*p,*q,c;
    printf("Enter two number = ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    c= *p + *q;
    printf("Sum = %d",c);
    return 0;
}