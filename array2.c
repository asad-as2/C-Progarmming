//Basic array input and output of elements one after one.
#include<stdio.h>
int main()
{
int x[5],i;
for(i=0;i<5;i++)
{
    printf("Enter the value = ");
    scanf("%d",& x[i]);
    printf("The entered value is = %d\n",x[i]);
}
return 0;
}