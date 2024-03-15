#include<iostream>
using namespace std;
int fibo(int n)
{
   
    int a=0,b=1,c=1;
    for(int i=1;i<=n;i++)
    {
        //cout<<a<<" ";
        if(i==n)
        {
            return a;
        }
        a=b;
        b=c;
        c=a+b;
    }
    //cout<<a;
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    cout<<fibo(n);
}