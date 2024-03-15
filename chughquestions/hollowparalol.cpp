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
        // for(int i=2;i<n;i++)
        // {
        //     for(INT j=2;j<n;j++)

        // }
    
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
 
        }
        cout<<endl;
    }
}