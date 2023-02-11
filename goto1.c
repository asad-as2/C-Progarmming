#include<stdio.h>
int main()
{
int n,i=1;
printf("Enter Number=");
scanf("%d",&n);
printnum:
printf("%d\n",i);
i++;
if(i<=n)
goto printnum;
return 0;
}