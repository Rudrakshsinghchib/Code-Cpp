#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int t=1;
    int l=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    for(int i=2;i<sum-1;i++)
    {
        if(sum%i!=0)
        {
            t=0;
            break;
        }
        else
        {
            sum=sum+1;
            l++;
            
        }

    }
    cout<<l;
}