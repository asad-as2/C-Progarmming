#include<stdio.h>
int main()
{ 
  int a,b,c;
  printf("Enter the value of a before swapping= ");
  scanf("%d",&a);
  printf("Enter the value of b before swapping= ");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("The value of a after swapping= %d\n",a);
  printf("The value of b after swapping= %d\n",b);
  return 0;
}