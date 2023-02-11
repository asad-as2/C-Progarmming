//With Argument With Return.
#include<stdio.h>
int add(int a,int b);
int main()
{
    int a,b,sum;
    printf("Enter two number =");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("Addition = %d",sum);
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
