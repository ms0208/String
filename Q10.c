// Count number 
#include<stdio.h>

int main()
{
    int num ,k=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
    num = num/10;
    k++;
    }
    printf("Number of digit is %d\n",k);
    return 0;
}