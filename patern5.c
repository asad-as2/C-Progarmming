#include<stdio.h>
int main()
{
char ch,i,j;
for(i='A';i<='S';i++)
{
    for(j='A';j<=i;j++)
    {
        printf("%c ",j);
    }
    printf("\n");
}
return 0;
}