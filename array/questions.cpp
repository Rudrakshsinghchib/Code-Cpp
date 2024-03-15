#include<iostream>                                      //    l-2
using namespace std;
int unique(int arr[],int size)
{
    int ans=0;
    for (int i=0;i<size;i++)
    {
        ans=ans^arr[i];

    }
    return ans;
}
void sort(int arr[],int s)
{
    int countzero=0;
    int countone=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==0)
        {
            countzero=countzero+1;
        }
        if(arr[i]==1)
        {
            countone=countone+1;
        }
        
    }
    //this method good
    int i;
    // for(i=0;i<countzero;i++)
    // {
    //     arr[i]=0;
    // }
    // for(;i<s;i++)
    // {
    //     arr[i]=1;

    // }

    //EASy eay
    // int index=0;
    // while(countzero--)
    // {
    //     arr[index]=0;
    //     index++;
    // }
    // while(countone--)
    // {
    //     arr[index]=1;
    //     index++;
    // }

    // while(countzero>0)
    //     {
    //         cout<<0<<" ";
    //         countzero=countzero-1;
    //     }
    //     while(countone>0)
    //     {
    //         cout<<1<<" ";
    //         countone=countone-1;
    //     }
        
    
   
}
void shiftarray(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    // for(int i=n-1;i>0;i--)
    // {
    //     arr[i]=arr[i-1];
    // }
    arr[0]=temp;
     
     
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    shiftarray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    // int arr[]={0,1,1,1,0,1,0,0,0};
    // int n=9;
    // sort(arr,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // for(int i=0;i<n;i++)u
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr[i]<<arr[j]<<" ";

    //     }
    //     cout<<endl;
    // }// can do for triplets just one more 

    


    // int arr[]={1,3,3,9,7,7,1};
    // int n=7;
    // cout<<unique(arr,n);

}