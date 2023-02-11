// WAP in C to accept a string and print it character by character.
#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("Enter your name:");
    gets(a);
    i=0;
   // while(a[i]!='\0')
   //for(i=0;a[i]!='\0';i++)
   for(i=0;a[i];i++)
    {
        printf("%c",a[i]);
        printf("\n");        //This implies that our loop is working and its print one by one. 
    }
    return 0;
} 