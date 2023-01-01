// Input Gets and Puts.
#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter name\n");
    gets(name); // It help to get gap in string.
    printf("Name is %s\n",name);
    puts(name); // To printe string.
}