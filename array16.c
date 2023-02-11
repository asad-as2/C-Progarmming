//WAP in C to find the frequency of negative ,positive and zero numbers in array.
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of an array =");
scanf("%d",&n);
int a[n+10],i,pcount=0,ncount=0,zcount=0;
for(i=0;i<n;i++)
{
    printf("Enter the element =");
    scanf("%d",&a[i]);
    if(a[i]>0)
    pcount++;
    else if(a[i]==0)
    zcount++;
    else
    ncount++;
}
printf("Total Positive numbers = %d\nTotal Negative numbers = %d\nTotal Zero = %d",pcount,ncount,zcount);
return 0;
}