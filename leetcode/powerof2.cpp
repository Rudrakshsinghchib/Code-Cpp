#include <iostream>
#include<math.h>
#include<climits>
using namespace std;

/*bool check(int num){
    if(num & (num-1)!=0){
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<check(n);
   
}*/
int main()
{
    int n;
    cin>>n;
    int ans=1;
   
    bool t=0;
    for(int i=0;i<=30;i++)
    {
        if(ans==n)
        {
            t=1;
        }
        if(ans<INT_MAX/2)
        ans=ans*2;
    }
    if(t==1)
    {
        cout<<true;
    }
    else{
        cout<<false;
    }

}
  
