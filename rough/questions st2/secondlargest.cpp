//array rotation   5 6 7 1 2 3 4  k=3
// second largest element in array
//sum of sub arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    int second=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(max>arr[i])
        {  
            if(arr[i]>second)
            {
                second=arr[i];
            }
        }
    }
    cout<<second<<endl;

}