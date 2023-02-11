// WAP in C to check two strings are anagram or not. Examples are silent=listen , read=dear .
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i,j,c,d,found=0;
    printf("Enter the first string = ");
    gets(a);
    printf("Enter the second string = ");
    gets(b);
    c=strlen(a);
    d=strlen(b);
    if(c==d)
    {
        for(i=0;i<c;i++)
        {
            found=0;
            for(j=0;j<c;j++)
            {
                if(a[i]==b[j])
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
            break;
        }
    if(found==1)
    printf("Anagram");
    else
    printf("Not Anagram");
}
else
printf("String size are different");
return 0;
}