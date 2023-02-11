// WAP in C to print the sum of two number using function with pointer. With arguments with return.
#include<stdio.h>
int add(int *,int *);
int main()
{
    int a,b,*p,*q,addi;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    addi=add(p,q);
    printf("Sum = %d",addi);
    return 0;
} 
int add(int *p,int *q)
{
    int c;
    c=*p+*q;
    return c;
}