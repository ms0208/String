#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    int i;
    printf("Enter the String\n");
    gets(a);
    revstr(a);
    printf("The reverse string is %s",a);
}
void revstr(char *str)
{
    int len,i,temp;
    len = strlen(str);

    for(i=0;i<len/2;i++)
    {
        temp = str[i]; // temp = M
        str[i] = str[len-i-1]; // str[0] = v , str[1] = a
        str[len-i-1] = temp; // str[4] = M  , str[3]  = a , str[2] = n , str[1] = a, str[0] = v
        // vanaM
    } 
}