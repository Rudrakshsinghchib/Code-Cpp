#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*for(int i=1;i<=n;i=i+1)
    {
        cout<<i<<endl;

    }*/
    /*int i=1;
    for(; ; )
    {
        if(i<=n){
            cout<<i<<endl;

        }
        else{
            break;
        }
        i++;
    }*/
    for(int a=0,b=1,c=2;a>=0 && b>=1 && c>=2;a--,b--,c--)
    {
        cout<<a<<" "<<b<<" "<<c;
    }

}