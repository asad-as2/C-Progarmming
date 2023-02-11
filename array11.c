// Program to print alternate elements of the array.
#include<stdio.h>
int main()
{
int size;
printf("Enter the size of an array = ");
scanf("%d",&size);
int a[size],i;
for(i=0;i<size;i++)
{
    printf("Enter elements = ");
    scanf("%d",&a[i]);
}
for(i=0;i<size;i=i+2)
{
    printf("%d ",a[i]);
}
return 0;
}