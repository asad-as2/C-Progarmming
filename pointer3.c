// WAP in C to check a number is prime number or not using pointer .
#include<stdio.h>
int main()
{
    int i,n,*p,count=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    p=&n;
    for(i=2;i<=*p/2;i++)
    {
        if(*p%i==0)
        count++;
    }
    if(*p>1)
    {
        if(count==0)
        printf("%d is a prime number",*p);
        else
        printf("%d is not a prime number",*p);
    }
    else
    printf("%d is not a prime number",*p);
    return 0;
}