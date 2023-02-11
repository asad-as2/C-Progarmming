//Program to create 2-d array.
#include<stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the number of rows and column = ");
scanf("%d%d",&m,&n);
int mat[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    printf("Enter element = ");
    scanf("%d",&mat[i][j]);
}
printf("The created matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",mat[i][j]);
}
printf("\n");
}
return 0;
}