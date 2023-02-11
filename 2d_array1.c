//2d array or 3*3 matrix.
#include<stdio.h>
int main()
{
int a[3][3],i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    printf("Enter value for 2d array=");
    scanf("%d",&a[i][j]);
}
printf("\n2d array elements are \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
}
return 0;
}