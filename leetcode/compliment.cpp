#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mask=0;
    int m=n;

    while(m!=0)
    {
        mask=(m<<1) | 1;
        m=m>>1;
    }
    int ans=(~n)& mask;
    cout<<ans;





    
    
    
    
}
