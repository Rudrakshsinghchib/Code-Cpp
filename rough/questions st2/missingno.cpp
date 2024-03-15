#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
int missingno(int ar[],int n)
{
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    int tsum=(n*(n+1))/2;
    int ans=tsum-sum;
    return ans;



    // int n=num.size();
    // int sum=0;
    // for(int i=0;i<n;i++)
    // {
    //     sum=sum+num[i];


    // }
    // int tsum=((n)*(n+1))/2;
    // int ans=tsum-sum;
    // return ans;
}
int main()
{
    // int c;
    // cin>>c;
    // int arr[c];
    // for(int i=0;i<c;i++)
    // {
    //     cin>>arr[c];
    // }
    int n;
    cin>>n;
    int *arr=new int(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   // int c=5;
    int f=missingno(arr,n);
    cout<<f;

    

    
}