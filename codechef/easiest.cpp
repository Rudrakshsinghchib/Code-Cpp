#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int x[n];
    int y[n];
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }

    for(i=1;i<=n;i++)
    {
        if(x[i]+y[i]>6)
        {
            cout<<"YES"<<endl;;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    
}

