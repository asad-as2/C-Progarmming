// WAP in C to use the concept of structure in the form of array.
#include<stdio.h>
struct employee
{
    int code;
    char name[50];
    float salary;
};
int main()
{
    int n;
    printf("Enter the size of an array = ");
    scanf("%d",&n);
    struct employee a[n];
    int i,key,flag=0,pos;
    for(i=0;i<n;i++)
    {
        printf("Enter the code = ");
        scanf("%d",&a[i].code);
        printf("Enter the name = ");
        scanf("%s",&a[i].name);        //gets(a[i].name);
        printf("Enter the salary = ");
        scanf("%f",&a[i].salary);
    }
    printf("Enter the code to search = ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i].code==key)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("code = %d",a[pos].code);
        printf("\nName = %s",a[pos].name);
        printf("\nSalary = %f",a[pos].salary);
    }
    return 0;
}
