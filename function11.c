//WAP in C to search an element by implement linear search by using function.
#include<stdio.h>
void search(int [],int,int);
int main()
{
    int n;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    int a[n+10],i,val;
    for(i=0;i<n;i++)
    {
        printf("Enter the element of an array = ");
        scanf("%d",&a[i]);
    }
    printf("Enter the element which you want to search = ");
    scanf("%d",&val);
    search(a,n,val);
    return 0;
}
void search(int b[],int m,int x)
{
    int i,flag=0;
    for(i=0;i<m;i++)
    {
        if(b[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
    printf("Element found at index = %d",i);
    printf("\nElement found at position = %d",i+1);
    }
    else
    printf("Element is found in array");
}