#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    bool t=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            t=1;
        }

    }
    if(t==0)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

}