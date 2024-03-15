#include<iostream>
using namespace std;


    // int i=0;
    // int ans =0;
    // while (n>0)
    // {
        
    //     int bit =n&1;
    //     cout<<bit;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans;
int count(int c,int d)
{
    int count11=0;
    
    while(c!=0)
    {
         int t=c&1;
        if(t==1)
        {
            count11=count11+1;
        }
        c=c>>1;
    }

    int f=d&1;
    while(d!=0)
    {
        int f=d&1;
        if(f==1)
        {
            count11=count11+1;
        }
        d=d>>1;
    }

    return count11;

}
int main()
{
    int a,b;
    cin>>a>>b;
    count(a,b);

    cout<<count(a,b);

}
