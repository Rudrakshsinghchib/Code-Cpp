#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    int b=n;
    int fact=1;
    for(int i=1;i<=b;i++)
    {
        fact=n*fact;
        n=n-1;
    }
    cout<<fact;
}