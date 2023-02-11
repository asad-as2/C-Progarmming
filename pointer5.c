// WAP in C to accept and display the sum of an array using pointer .
#include<stdio.h>
int main()
{ 
    int n,i,*p,sum=0;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    int a[n+10];
    p=&a[0];   //p=a;
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of an array = ");
        scanf("%d",&a[i]);       // scanf("%d",&*(p+i));
    }
    printf("The array elements are = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
        sum=sum+*(p+i);
    }
    printf("\nsum = %d",sum);   
    return 0;
}