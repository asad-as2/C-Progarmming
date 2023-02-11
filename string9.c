
// WAP in C to count total number of words in a given string(dot(.)is counted and numbers are also counted as a word).
#include<stdio.h>
int main()
{
int i,count=1;
char a[10000];
printf("Enter the sentence: ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
    {
        if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!='\0')
        count++;
    }
}
printf("The total number of words in a given sentence = %d",count);
return 0;
}
