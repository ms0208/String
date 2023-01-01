// Input string 
#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter the name\n");
    scanf("%s",name); // It can't considered space between string
    printf("Name is %s\n",name);
    char Fname[30],Lname[30];
    printf("Enter the full name\n");
    scanf("%s %s",Fname,Lname);
    printf("Full name is %s %s\n",Fname,Lname);
}