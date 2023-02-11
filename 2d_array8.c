//Concert matrix of its transpose.
#include<stdio.h>
int main()
{
int m ,n;
printf("Enter the rows and column =");
scanf("%d %d",&m,&n);
int a[m][n],b[m][n],i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    printf("Enter the element = ");
    scanf("%d",&a[i][j]);
}
printf("The original matrix :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
printf("The transpose of the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
    b[i][j]=a[j][i];
    printf("%d ",b[i][j]);
}
printf("\n");
}
return 0;
}