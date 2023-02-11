//Program to accept and display an array.
#include<stdio.h>
int main()
{
float x[5];
int i;
for(i=0;i<5;i++)
{
    printf("Enter the float values = ");
    scanf("%f",&x[i]);
}
printf("The values are :\n");
for(i=0;i<5;i++)
printf("%f ",x[i]);
return 0;
}