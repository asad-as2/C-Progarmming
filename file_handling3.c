// WAP in C count total numbers of vowels and consonants in a file .
#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    int vowel=0,cons=0;
    fp=fopen("file1.txt","r");
    c='a';
    while(c!=EOF)
    {
        c=fgetc(fp);
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        vowel++;
        else
        cons++;
        } 
    }
    printf("Total Vowels = %d\nTotal Consonants = %d",vowel,cons);
    return 0;
}