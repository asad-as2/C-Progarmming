// WAP in C to print total number of even and odd number .
#include<stdio.h>
int main()
{
    int n,*p,i,even=0,odd=0;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    int a[n+10];
    p=&a[0];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of an array =");
        scanf("%d",&a[i]);  // scanf("%d",&*(p+i));
        if(*(p+i)%2==0)
        even++;
        else
        odd++;
    }
    printf("The total even numbers are = %d",even);
    printf("\nThe total odd number are = %d",odd);
    return 0;
}