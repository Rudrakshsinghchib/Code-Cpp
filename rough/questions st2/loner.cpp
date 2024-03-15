#include <iostream>
using namespace std;
int ior(int arr[],int n)
{
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];


    }
    return ans;


}
int main()
{
    int arr[7]={7,4,2,2,4,7,7};
    int n=7;
    int t=ior(arr,7);
    cout<<t;

}