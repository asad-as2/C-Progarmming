//WAP in C to sort(in ascending order) an array by Bubble sort.
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of list =");
scanf("%d",&n);
int arr[n+10],i,j,a;
for(i=0;i<n;i++)
{
    printf("Enter the element =");
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
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}