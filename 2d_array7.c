// Multiplication of two matrix.
#include<stdio.h>
int main()
{
int m,n;
printf("Enter no of rows and column for matrix =");
scanf("%d %d",&m,&n);
int a[m][n],b[m][n],i,j,k,c[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter element for first and second matrix =");
        scanf("%d %d",&a[i][j],&b[i][j]);
    }
}
printf("The first matrix is:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
}
printf("The second matrix is:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    printf("%d ",b[i][j]);
    printf("\n");
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
{
    c[i][j]=0;
    for(k=0;k<n;k++)
    {
        c[i][j]+=a[i][k]*b[k][j];
    }
}
}
printf("Multiplication of matrix is:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
{
    printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}