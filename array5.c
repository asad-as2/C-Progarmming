//Program to print the name of five students using array.
#include<stdio.h>
int main()
{
    char a[5][1000];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the names of student :");
        scanf("%s",&a[i]);
    }
    printf("The students names are :\n");
    for(i=0;i<5;i++)
    {
    printf("%s\n",a[i]);
    }
return 0;
}