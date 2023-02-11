#include<stdio.h>
void main()
{
int a,b,y,f,e;
char x;
float m;
double d;
b=sizeof(a);
y=sizeof(x);
f=sizeof(m);
e=sizeof(d);
printf("Integer size=%d\n",b);
printf("Character size=%d\n",y);
printf("Float size=%d\n",f);
printf("Double size=%d",e);
}