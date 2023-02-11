//WAP in C to find the sqare of a number using function and returned statement.
#include<stdio.h>
int square(int a);
int main()
{
    int m,x;
    printf("Enter the number =");
    scanf("%d",&m);
    x=square(m);
    printf("Square of %d = %d",m,x);
    return 0;
}
int square(int a)
{
    return a*a;
}