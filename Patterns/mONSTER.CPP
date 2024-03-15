#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;

        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }
        int k=i-1;
        while(k>0)
        {
            cout<<k;
            k=k-1;
        }
        /*int space1=n-i;
        while(space)
        {
            cout<<" ";
            space1=space1-1;

        }*/
        cout<<endl;
        i=i+1;

    }
}