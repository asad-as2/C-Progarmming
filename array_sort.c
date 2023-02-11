//Program to sort(Selection sort) the array.
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of aaray = ");
scanf("%d",&n);
int a[n+10],i,j,t;
for(i=0;i<n;i++)
{
    printf("Enter the element = ");
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
printf("The array element in ascending order = ");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}