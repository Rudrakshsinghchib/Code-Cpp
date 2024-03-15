#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++)
    {
        int k=n-i;
        while(k)
        {
            cout<<" ";
            k=k-1;
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}