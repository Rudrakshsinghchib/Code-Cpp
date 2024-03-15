#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
   /*int a=0,b=1,c=1;
    for(;n>=a;)
    {
        cout<<" "<<a;
        a=b;
        b=c;
        c=a+b;
        
    }*/ // bitchest way possible
    int a=0,b=1,c=1;
    for(int i=1;i<=n;i++)
    {
        cout<<" "<<a;
        a=b;
        b=c;
        c=a+b;

    }
}