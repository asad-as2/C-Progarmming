//Function Program
//No Argument No Return 
#include<stdio.h>
void add ();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,sum;
    printf("Enter the number =");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Addition = %d",sum);
}