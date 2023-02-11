# include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first no=");
    scanf("%d",&a);
    printf("Enter second no=");
    scanf("%d",&b);
    printf("Enter third no=");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    {
        printf("a is greater = %d",a);
    }
    if((b>a)&&(b>c))
    {
        printf("b is greater = %d",b);
    }
    else
    {
        printf("c is greater = %d",c);
    }
}