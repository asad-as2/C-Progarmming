//WAP in C to print the sum of left and right diagonal in a square matrix with common element in both.
#include<stdio.h>
int main()
{
int i,j,sum=0,m,n,add=0,midd,addi;
printf("Enter the numbers of rows and columns =");
scanf("%d%d",&m,&n);
int mat[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter the elements =");
        scanf("%d",&mat[i][j]);
        if(i==j)
        {
            sum=sum+mat[i][j];
        }
        else if(i+j==m-1)
        {
            add=add+mat[i][j];
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
midd=mat[((m+1)/2)-1][((m+1)/2)-1];/*If we want the sum without common element then used this line as 
a comment.*/

printf("Sum of left diagonal elements = %d\n",sum);
printf("Sum of right diagonal elements =%d\n",add+midd);//(add+midd is replaced by add).

/*Because in middle ,the common element (1,1),(3,3)....which means that (i==j) and this is use in left 
diagonal condition. 
If we want to take common element in right diagonal then we have to take one extra variable for finding
position of common element  and then add seaparately in the right dia.sum add sum of left & right diagonal*/

addi=sum+add+midd;//remove midd from here
printf("Sum of both diagonal is = %d",addi);
return 0;
}