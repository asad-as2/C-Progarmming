//WAP in C to print the sum of two matrix by using function.
#include<stdio.h>
void sum(int [][10],int [][10],int ,int );
int main()
{
    int n,a[10][10],b[10][10],i,j;
    printf("Enter the size of a sqare matrix = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("Enter the element for 1 array = ");
        scanf("%d",&a[i][j]);
        printf("Enter the element for 2 array = ");
        scanf("%d",&b[i][j]);
    }
    }
    printf("The first matrix is :\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    printf("The second matrix is :\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
    }
    sum(a,b,n,n);
    return 0;
}
void sum(int c[][10],int d[][10],int u,int v)
{
    int e[u][u],i,j;
    for(i=0;i<u;i++)
    for(j=0;j<u;j++)
    e[i][j]=c[i][j]+d[i][j];
    printf("The sum of matrix is :\n");
    for(i=0;i<u;i++)
    {
    for(j=0;j<u;j++)
    printf("%d ",e[i][j]);
    printf("\n");
    }
}