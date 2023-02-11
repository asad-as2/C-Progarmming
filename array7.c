//WAP in C to insert at a given index.
#include<stdio.h>
int main()
{
int a[100],n,i,value,pos;
printf("Enter the no. of elements =");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the elements =");
    scanf("%d",&a[i]);
}
printf("Enter the value to be updated =");
scanf("%d",&value);
printf("Enter the position or index =");
scanf("%d",&pos);
for(i=n;i>pos;i--)
{
    a[i]=a[i-1];
}
a[pos]=value;
printf("Updated array =");
for(i=0;i<=n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}