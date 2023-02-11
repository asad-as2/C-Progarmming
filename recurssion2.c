//WAP in C to print fibonacci series by using recurssion.
#include<stdio.h>
void fibo(int);
int main()
{
    int n,a=0,b=1;
    printf("Enter the number of term = ");
    scanf("%d",&n);
    printf("0 1 ");
    fibo(n-2);
    return 0;
}
void fibo(int a)
{
    static int n1=0,n2=1,n3;
    if(a>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        fibo(a-1);
    }
}