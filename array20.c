// WAP in C to remove a number (occur one or more than one time).
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    int a[n+10],key,i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter the element of an array = ");
        scanf("%d",&a[i]);
    }
    printf("Enter the element to remove from an array = ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            for(j=i+1;j<n;j++)
            a[j-1]=a[j];
            i--;
            n--;
        }
    }
    printf("Array after removing %d is :\n",key);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}