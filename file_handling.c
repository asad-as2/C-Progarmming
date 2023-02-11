// WAP in C to write something by using fputs in file handling.
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file1.txt","w");
    if(fp==NULL)
    {
        printf("Some error occured ....");
        return 0;
    }
    fputs("Hello to the world of file handling using fputs . and my name is mohd asad ansari",fp);
    fclose(fp);
    printf("File created successfully ...");
    return 0;
}