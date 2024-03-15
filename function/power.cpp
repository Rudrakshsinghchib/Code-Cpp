//function mainly makes the code#
#include<iostream>
using namespace std;
int power(int a,int b)
{
    
    
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    power(a,b);
    cout<<power(a,b)<<endl;

    // int c,d;
    // cin>>c>>d;
    // power(c,d);
    // cout<<power(c,d)<<endl;

    // int f,g;
    // cin>>f>>g;
    // power(f,g);
    // cout<<power(f,g);



}