//WAP in C to print the sum of an array by using function.
#include<stdio.h>
void sum(int [],int);
int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    int a[n+10],i;
    for(i=0;i<n;i++)
    {
        printf("Enter the elements = ");
        scanf("%d",&a[i]);
    }
    sum(a,n);
    return 0;
}
void sum(int b[],int x)
{
    int i,sum=0;
    for(i=0;i<x;i++)
    {
        sum=sum+b[i];
    }
    printf("The sum of an array = %d",sum);
}