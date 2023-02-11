// WAP in C to count total number of vowels and consonants.
#include<stdio.h>
int main()
{
int i,vol=0,con=0;
char a[100];
printf("Enter the string: ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
  //  if((a[i]>='a'&& a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
      if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        vol++;
        else
        con++;
    }   
}
printf("Total Number of vowel = %d and consonants = %d",vol,con);
return 0;
}