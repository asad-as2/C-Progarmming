//WAP in C to delete an element from the given index of an array.
#include<stdio.h>
int main()
{
int n;
printf("Enter the the number of elements=");
scanf("%d",&n);
int a[n+10],i,pos;//we take 10 more block/index for future use if we want to add more elements.
for(i=0;i<n;i++)
{
    printf("Enter the element=");
    scanf("%d",&a[i]);
}
printf("Enter the index of element you want to delete =");
scanf("%d",&pos);
printf("Old array is :");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
for(i=pos;i<n-1;i++)
{
    a[i]=a[i+1];
}
a[n-1]=0;
printf("\nUpdated array :");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}