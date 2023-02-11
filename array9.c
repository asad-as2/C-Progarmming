//Program to count total even and odd numbers in an array.
#include<stdio.h>
int main()
{
int size;
printf("Enter the size of an array=");
scanf("%d",&size);
int a[size],i,even=0,odd=0;
for(i=0;i<size;i++)
{
    printf("Enter element =");
    scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
    if(a[i]%2==0)
    even++;
    else
    odd++;
}
printf("Total even no.s =%d\nTotal odd no.s=%d",even,odd);
return 0;
}