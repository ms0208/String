// Print half string.
#include<stdio.h>
int main()
{
    char name[30];
    gets(name);
    printf("%.5s\n",name);
    printf("%10.5s\n",name);
    scanf("%5s",name);
    puts(name);
    printf("%s\n",&name[3]);
}