#include<iostream>                            
// array L-1
using namespace std;

int rev(int arr[],int size)
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
        cout<<arr[i]<<" ";

    }
    

}
//extreme print of array
int ext(int arr[],int size)
{
    int left=0;
    int right=size-1;

    while(left<=right)
    {
        if(left==right)
        {
            cout<<" "<<arr[left];
        }
        else
        {
            cout<<arr[left]<<" "<<arr[right]<<" ";;;

        }
        left++;
        right--;
    
    }
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


}

int main()
 {
    // int arr[5]={10,20,30,40,50};
    // int n=5;
    // ext(arr,n);
   
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTEr elemeets"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    ext(arr,n);
    
}