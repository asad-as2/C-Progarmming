//WAP in C to print the table of a user given no.without using loop.

//Goto Statement--The go to is a jump statement which is used to jump from one point to another predefine
// level.

#include<stdio.h>
int main()
{
int n,i;
i=1;
printf("Enter the number=");
scanf("%d",&n);
xyz:
printf("%d * %d = %d\n",n,i,n*i);
i+=1;
if(i<=10)
goto xyz;
return 0;
}