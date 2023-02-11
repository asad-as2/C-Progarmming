#include<stdio.h>
int main()
{
int i,a,j;
printf("Enter no=");
scanf("%d",&a);
for(i=1;i<=a;i+=2)
{
    for(j=1;j<=i;j+=2)
    {
        printf("%d ",j);
    }
    printf("\n");
}
return 0;
}