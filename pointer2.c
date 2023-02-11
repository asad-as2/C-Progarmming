// WAP in C to check a number is odd or even using pointer.
#include<stdio.h>
int main()
{
    int a,*p;
    printf("Enter the number = ");
    scanf("%d",&a);
    p=&a;
    if(*p%2==0)
    printf("Even number");
    else
    printf("odd number");
    return 0;
}