// WAP in C to accept and display array using pointer .
#include<stdio.h>
int main()
{
    int n ,i,*p;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    int a[n+10];
    p=&a[0];   // p=a; isko bhi use kr skte. 
    for(i=0;i<n;i++)
    {
        printf("Enter the elements = ");
        scanf("%d",&a[i]);      // scanf("%d",&*(p+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}