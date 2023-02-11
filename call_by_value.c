//WAP in C using call by value method .
#include<stdio.h>
void change(int);
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("Value of a before calling = %d",a);
    change(a);
    printf("\nValue of a after function call = %d",a);
    return 0;
}
void change(int a)
{
    a=a+10;
    printf("\nValue of a at time of function calling = %d",a);
}