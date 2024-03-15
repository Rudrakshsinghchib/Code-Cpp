#include<iostream>
using namespace std;
int binary(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int m=(s+e)/2;
    while(s<=e)
    {
        if(arr[m]==target)
        {
            return m;
        }
        else if(arr[m]>target)
        {
            e=m-1;
        }
        else if(arr[m]<target)
        {
            s=m+1;
        }
        m=(s+e)/2;


    }
    return -1;
}
int firstoccurrence(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int m=s/2+e/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[m]==target)
        {
            ans=m;
            e=m-1;
            
        }
        else if(arr[m]>target)
        {
            e=m-1;
        }
        else if(arr[m]<target)
        {
            s=m+1;
        }
        m=(s+e)/2;


    }
    return ans;

}
int lastoccurrence(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int m=s/2+e/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[m]==target)
        {
            ans=m;
            s=m+1;
            
        }
        else if(arr[m]>target)
        {
            e=m-1;
        }
        else if(arr[m]<target)
        {
            s=m+1;
        }
        m=(s+e)/2;


    }
    return ans;

}
int totaloccurrence(int arr[],int n,int target)
{
    int t=firstoccurrence(arr,n,target);
    int k=lastoccurrence(arr,n,target);
    return k-t+1;
}
int missing(int arr[],int n) //gfg question 
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        int diff=arr[mid]-mid;
        if(diff==1)
        {
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1; 
        }
        mid=s+(e-s)/2;

    }
     if(ans==-1)    // how we can avoid it and use in code
    {
        return n+1;
    }

   
    return ans+1;
    

}
 int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        while(s<e)
        {
            if(arr[m]<arr[m+1])
            {
                
                s=m+1;
            }
            else
            {
                e=m;
            }

            m=s+(e-s)/2;
            

        }
        return s;
        
    }
int main()
{
    // int arr[]={10,30,30,30,30,60,70};
    // int n=7;
    // int target=30;
    // cout<<binary(arr,n,target)<<endl;
    // cout<<firstoccurrence(arr,n,target)<<endl;;
    // cout<<lastoccurrence(arr,n,target)<<endl;;
    //  cout<<totaloccurrence(arr,n,target)<<endl;;

    int arr[]={1,2,4,5,6,7};
    int n=7;
    cout<<missing(arr,n);
    int <vector> arr;


    

}