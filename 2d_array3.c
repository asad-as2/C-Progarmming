//WAP in C to find the sum of diagonal elements(from left to right) in given square matrix.
#include<stdio.h>
int main()
{
int m,n,i,j,sum=0;
printf("Enter the numbers of rows and columns =");
scanf("%d%d",&m,&n);
int mat[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter the elements=");
        scanf("%d",&mat[i][j]);
        if(i==j)
        {
            sum=sum+mat[i][j];
        }
    }
}
printf("The matrix is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
    printf("%d ",mat[i][j]);
}
printf("\n");
}
printf("Sum of diagonal element = %d",sum);
return 0;
}