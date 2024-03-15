#include<iostream>                                           //l-1
#include<limits.h>
using namespace std;
void printarray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int arr[],int size, int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}

int count(int arr[],int size)
{
    int countzero=0;
    int countone=0;
    for(int i=0;i<size;i++)
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
    cout<<countzero<<endl;
    cout<<countone;

}
int min(int arr[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;

}



int main()
{
    // int arr[]={3,4,7,22,44,-90,9};
    // int n=7;
    //cout<<min(arr,n);

    int arr[]={0,5,0,1,2,1,0,0,3,1,45};
    int n=11;
    count(arr,n);
    // int arr[5]={4,5,6,7,8};
    // int size=5;
    // printarray(arr,size);

    // int target=9;
    // bool ans=linearsearch(arr,n,target);
    // if(ans==1)
    // {
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"not";
    // }
    // int arr[5]={5,6,8,7,4};
    // int target=9;
    // int flag=0;
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]==target)
    //     {
    //         flag=1;

    //     }
    // }
    // if(flag)
    // {
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"not";
    // }

}