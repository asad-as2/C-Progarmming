//WAP in C to implement in binary search .
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of an array =");
scanf("%d",&n);
int arr[n+10],i,j,mid,flag=0,val,l,h,a;
for(i=0;i<n;i++)
{
    printf("Enter the elements =");
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
        }
    }
}
printf("Enter the value you want to search =");
scanf("%d",&val);
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
l=0;
h=n-1;
while(l<=h)
{
    mid=(l+h)/2;
    if(val<arr[mid])
    h=mid-1;
    else if(val>arr[mid])
    l=mid+1;
    else if(val==arr[mid])
    {
    flag=1;
    break;
    }
}
if(flag==1)
{
printf("\nElement found at index = %d",mid);
printf("\nElement found at Position = %d",mid+1);
}
else
printf("\nElement not found");
return 0;
}