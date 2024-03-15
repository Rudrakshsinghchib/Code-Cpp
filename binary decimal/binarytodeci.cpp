#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0)
    {
        int fi=n%10;
        if(fi==1)
        {
            ans=ans+pow(2,i);
        }
        i++;
        n=n/10;

    }
    cout<<ans;
}