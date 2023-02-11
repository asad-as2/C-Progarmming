//WAP in C to create an array and implement linear search.
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of array =");
scanf("%d",&n);
int a[n+10],i,val,flag=0;
for(i=0;i<n;i++)
{
    printf("Enter the element =");
    scanf("%d",&a[i]);
}
printf("Enter the element you want to search =");
scanf("%d",&val);
for(i=0;i<n;i++)
{
    if(a[i]==val)
    {
    flag=1;
    break;
    }
}
if(flag)
printf("Element found at index =%d",i);
else
printf("Element not found");
return 0;
}