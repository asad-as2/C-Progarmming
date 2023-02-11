//Print row and column wise sum of a 2D array.
#include<stdio.h>
int main()
{
int m,n;
printf("Enter the no of row and column =");
scanf("%d%d",&m,&n);
int a[m][n],i,j;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter the element =");
        scanf("%d",&a[i][j]);
    }
}
printf("2D array elements are :\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<m;i++)
{
    int sum=0;
    for(j=0;j<n;j++)
    {
        sum=sum+a[i][j];
    }
        printf("Sum of %d row is %d\n",i+1,sum);
}
for(i=0;i<m;i++)
{
    int sum =0;
    for(j=0;j<n;j++)
    {
        sum = sum + a[j][i];
    }
        printf("Sum of %d column is %d\n",i+1,sum);
}
return 0;
}
