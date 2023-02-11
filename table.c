#include<stdio.h>
int main()
{
int i,n,mul;
printf("Enetr the number =");
scanf("%d",&n);
for(i=1;i<11;i++)
{
    mul=n*i;
    printf("%d\n",mul);
}
return 0;
}