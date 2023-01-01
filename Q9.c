//  Revese a number. 
#include<stdio.h>
int main()
{
    int n,i,reverse=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;                                           // 987 % 10 = 7 
        reverse = reverse * 10 + rem;                         // reverse = 0 * 10 +7 = 7;
        n=n/10;                                               // n = 987 => 987/10 = 98
    }                                                         // 98 % 10 = 8
    printf("Revese number is %d\n",reverse);                  // reverse = 7*10+8 = 78
    return 0;                                                // n = 98 => 98/10 = 9
}                                                             // reverse = 78*10+9 = 789. Ans,