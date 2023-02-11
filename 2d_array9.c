// WAP in C to print a series in a matrix.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of square matrix = ");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if((i+j)<=1)
        printf("%d ",a[i][j]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(i+j==n-1)
        printf("%d ",a[j][i]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(i+j>=3)
        printf("%d ",a[i][j]);
    }
    return 0;
}