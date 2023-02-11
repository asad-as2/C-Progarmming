// WAP in C to know the type of string.This program is for only one characetr.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter the string : ");
    scanf("%c",&a);
    if(isalpha(a))
    printf("The string is alphabet.");
    else
    printf("The string is not an alphabet.");
    if(isdigit(a))
    printf("\nThe string is a digits.");
    else
    printf("\nThe string is not digits.");
    if(isalnum(a))
    printf("\nThe string is either an alphabet or a digit.");
    else
    printf("\nThe string is neither an alphabet not a digit.");
    if(isspace(a))
    printf("\nThe string is a space.");
    else
    printf("\nThe string is not a space.");
    if(islower(a))
    printf("\nThe string is a lower case alphabet.");
    else
    printf("\nThe strig is not a lower case alphabet.");
    if(isupper(a))
    printf("\nThe string is a upper case alphabet.");
    else
    printf("\nThe string is not a upper case alphabet.");
    printf("\nThe string in lower case = %c",tolower(a));
    printf("\nThe string in upper case = %c",toupper(a));
    return 0;
}