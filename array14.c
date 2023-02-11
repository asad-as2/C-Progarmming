//WAP in C to delete an element from the end of array.
#include<stdio.h>
int main()
{
int n;
printf("Enter the no of elements =");
scanf("%d",&n);
int a[n+10],i;
for(i=0;i<n;i++)
{
    printf("Enter the element :");
    scanf("%d",&a[i]);
}
printf("Old array is =");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
a[n-1]=0;
printf("\nUpdated array is :");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}