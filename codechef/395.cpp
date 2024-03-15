#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[100],y[100];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]  >>y[i];
    }
    for(int i=0;i<n;i++)
    {
        if((x[i]*5)>=y[i])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}