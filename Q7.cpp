//Revese String in c++.
#include<iostream>
using namespace std;
int main()
{
    char ch[30]="Manav";
    int i,k=0;
   // cout<<"Enter the string\n";
   // cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        k++; // String store in K index.
    }
    cout<<"Revese string is\n";
    for(i=k-1;i>=0;i--)
    {
        cout<<ch[i];
    }
    return 0;
}