// WAP in C to check a given string is panagram or not .
#include<stdio.h>
int main()
{
    char a[1000],i,j;
    int k,f=0;
    printf("Enter the string = ");
    gets(a);
    for(i='a',j='A';i<='z';i++,j++)
    {
        f=0;
        for(k=0;a[k]!='\0';k++)
        {
            if(a[k]>='a'||'A' || a[k]<='z'||'Z')
            {
            if(a[k]==i||a[k]==j)
            {
                f=1;
                break;
            }
            }
        }
        if(f==0)
        break;
    }
    if(f==1)
    printf("panagram");
    else
    printf("Not pangram");
    return 0;
}