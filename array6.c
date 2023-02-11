//WAP in C to insert a value at the beginning of an array.
#include<stdio.h>
int main()
{
int a[100],n,i,value;
printf("Enter the no. of element you to insert =");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the element=");
    scanf("%d",&a[i]);
}
printf("Enter the value to be updated=");
scanf("%d",&value);
for(i=n;i>0;i--)
{
    a[i]=a[i-1];
}
a[0]=value;
printf("Updated array = ");
for(i=0;i<=n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}