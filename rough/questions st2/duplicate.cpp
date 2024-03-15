#include<bits/stdc++.h>
using namespace std;
int dupl(int a[],int n)
{
    int t;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            t=a[i];

        }
        

    }
     return t;
}
int main()
{
    int a[]={1,3,4,5,6,7,5};
    int t=0;
    int n=7;
    sort(a,a+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i];
    // }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            t=a[i];

        }
        

    }
    cout<<t;

}