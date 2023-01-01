// Revese string in C.
// It is not working in C.

#include<stdio.h>
int main()
{
    char ch[30]="Manav";
    int i,k=0;
  //  printf("Enter the string\n");
   // gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        k++;
    }
    printf("Revese string is\n");
    for(i=k-1;i>=0;i--)
    {
        printf("%s",ch[i]);
    }
    return 0;
}
