// WAP in C to use of call by reffernce method .
#include<stdio.h>
void change(int *);
int main()
{
    int a,*p;
    printf("Enter the value = ");
    scanf("%d",&a);
    p=&a;
    printf("Value of a before calling = %d",a);
    change(p);
    printf("\nValue of a after calling = %d",a);
    return 0;
}
void change(int *p)
{
*p=*p+10;
printf("\nValue of a at the time of calling = %d",*p);
}
