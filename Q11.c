// String Function
#include<stdio.h>
#include<string.h>
int main()
{
    char Fname[30]="Manav",Lname[30]="Sharma";  
    int c;
    printf(strcat(Fname,Lname));
    printf("\n");
    printf(strcpy(Fname,Lname));
    printf("\n");
    c = strcmp(Lname,Fname);
    printf("%d\n",c);
    char F[30]="ManavSharma is a great";
    char L[30]="great";
    char M[30]="Manav";
    printf(strstr(F,L));
    int len;
    len = strlen(F);
    printf("\n");
    printf("%d\n",len);
    printf(strlwr(F));
    printf("\n");
    printf(strupr(L));
    printf("\n");
    printf(strrev(F));
    return 0;
}