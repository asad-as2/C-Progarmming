//Program to check the greatest number.
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of array = ");
scanf("%d",&n);
int a[n+10],pos,i;
for(i=0;i<n;i++)
{
    printf("Enter the element =");
    scanf("%d",&a[i]);
}
pos=a[0];
for(i=1;i<n;i++)
{
 if(a[i]>pos)
 pos=a[i];   
}
printf("the greatest number is in the array = %d",pos);
return 0;
}