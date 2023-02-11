//Wap in C to reverse a number using function.
#include<stdio.h>
void reverse(int);
int main ()
{
int n;
printf("Enter the number =");
scanf("%d",&n);
reverse(n);
return 0;
}
void reverse(int x)
{
    int i,rev=0;
    for(i=x;i>0;i=i/10)
    {
        rev=(rev*10)+i%10;
    }
    printf("The reverse of a number = %d",rev);
}