// WAP in C to use the concept of file handling .
#include<stdio.h>
int main()
{
    int choice,roll,marks;
    char name[50];
    FILE *fp;
    fp=fopen("file2.txt","w");
    if(fp==NULL)
    {
        printf("Some error occured ....");
        return 0;
    }
    while(1)
    {
        printf("Enter the roll number = ");
        scanf("%d",&roll);
        fprintf(fp,"Roll = %d\n",roll);
        printf("Enter the name = ");
        scanf("%s",&name);
        fprintf(fp,"Name = %s\n",name);
        printf("Enter the marks = ");
        scanf("%d",&marks);
        fprintf(fp,"Marks = %d\n",marks);
        printf("\nEnter 1 for more\nEnter 2 for no\nEnetr your choice = ");
        scanf("%d",&choice);
        if(choice!=1)
        break;
    }
    printf("File created successsfully...");
    return 0;
}