#include<stdio.h>
int main()
{
int i;
char ch,j;
for(i=1;i<=10;i++)
{
    for(j='a';j<='z';j++)
    {
        printf("%c ",j);
    }
    printf("\n");
}
return 0;
}