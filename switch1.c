#include<stdio.h>
int main()
{
float a,b;
int ch;
printf("Enter two numbers=");
scanf("%f%f",&a,&b);
printf("Press \n1:Add\n2:Sub\n3:mul\n4:divide\nEnter your choice= ");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    printf("Addition=%f",a+b);
    break;
    case 2:
    printf("Subtraction=%f",a-b);
    break;
    case 3:
    printf("Multiplication=%f",a*b);
    break;
    case 4:
    printf("Division=%f",a/b);
    break;
    default:
    printf("Wrong choice");
    break;
}
return 0;
}