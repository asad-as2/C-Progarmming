// WAP in C to check a number is odd or even by using function with pointer .
#include<stdio.h>
void check(int *);
int main()
{
    int n,*p;
    printf("Enter the number = ");
    scanf("%d",&n);
    p=&n;
    check(p);
    return 0;
}
void check(int *p)
{
    if(*p%2==0)
    printf("Even number");
    else
    printf("Odd number");
}