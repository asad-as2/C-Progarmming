//WAP in C to print the sum of diagonal elements (from right to left).This is for when the no. of rows &columns are same. 
#include<stdio.h>
int main()
{
int i,j,sum=0,m,n;
printf("Enter the numbers of rows and columns =");
scanf("%d%d",&m,&n);
int mat[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter the elements =");
        scanf("%d",&mat[i][j]);
        if(i+j==m-1)
        {
            sum=sum+mat[i][j];
        }
    }
}
printf("The created matrix is \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    printf("%d ",mat[i][j]);
    printf("\n");
}
printf("SUM of diagonal elements is = %d",sum);
return 0;
}