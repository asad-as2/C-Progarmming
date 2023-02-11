// WAP in C to print all prime numbers between given range.
#include<stdio.h>
int main()
{
int i,j,n,m,o,flag;
printf("Enter the  number where to start = ");
scanf("%d",&n);
printf("Enter the number where to finish = ");
scanf("%d",&m);
for(i=n;i<=m;i++)
{
o=i;       // bina es condition ke bhi ho jayega bs o ke jgah i likhna hai ,or isse jldi compile ho rha.
flag=0;
for(j=2;j<=o/2;j++)
{
    if(o%j==0)
    {
        flag=1;
        break;
    }
}
if(o>1)
{
if(flag==0)
printf("%d ",o);
}
}
return 0;
}
