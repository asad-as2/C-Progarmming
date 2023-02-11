//WAP in C to insert value at the end of the array.
#include<stdio.h>
int main()
{
int a[100],n,i,value;
printf("Enter the no. of elements =");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements = ");
scanf("%d",&a[i]);
}
printf("Enter the value to be updated =");
scanf("%d",&value);
a[n]=value;
 printf("Updated array is = ");
for(i=0;i<=n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}