#include<stdio.h>
int main()
{
int a,i;
printf("Enter the number where u want to print even no upto n =");
scanf("%d",&a);
printf("The even numbers is\n");
for(i=0;i<=a;i++)
{
    if(i%2==0)
    printf("%d\n",i);
}
return 0;
}