// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(i=0;i<n;i++)
//     {
//         if(max>arr[i])
//         {
//             max=arr[i];
//         }
       

//     }
//     cout<<"min="<<max;
// }
#include<iostream>
#include<limits.h>
using namespace std;

int max(int arr[],int size)
{
    int maxi=INT_MIN;//INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;


}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    max(arr,size);
    cout<<max(arr,size);

}