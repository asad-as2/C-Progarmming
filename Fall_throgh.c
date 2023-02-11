#include<stdio.h>
int main()
{
int ch;
printf("Enter number from 1 to 7 to want name of the day according to the number =");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");//printf ke bad yha break nhi kiya 
case 3:
printf("Tuesday");//printf ke bad yha break nhi kiya 
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Wrong choice");
break;
}
return 0;
}