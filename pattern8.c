// WAP to print pattern.
#include<stdio.h>
int main()
{
    int i,j,m;
    printf("Enter the no. of rows : ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=(2*m)-1;j++)
        {
            if(j>=(2*m)-i)
            printf(" %d  ",i);
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}