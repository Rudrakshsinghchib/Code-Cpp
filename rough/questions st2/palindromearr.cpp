#include<iostream>                            
// array L-1
using namespace std;

bool pali(int arr[],int h[],int size)
{
    int left=0;
    int right=size-1;
    while(left<=right) //can do with for too
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
        for(int i=0;i<size;i++)
        {
            if(h[i]!=arr[i])
            {
                return 0;

            }
        }
        return 1;
    
    
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int left=0;
    int right=n-1;
    while(left<=right) //can do with for too
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];

    }
    // int k=n;
    // int h[k];
    // for(int i=0;i<k;i++)
    // {
    //     h[i]=arr[i];
    // }
   
    
    // if(pali(arr,h,n))
    // {
    //     cout<<"YEs";
    // }
    // else{
    //     cout<<"NO";
    // }

    


}