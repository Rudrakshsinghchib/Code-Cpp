#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
void missingno(vector <int> &num)
{
    int n=num.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];


    }
    int tsum=((n)*(n+1))/2;
    int ans=tsum-sum;
    cout<<ans;
}
void negativeahead(int arr[],int size)
{
    int index=0;
    int j=0;
    for(index;index<size;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index],arr[j]);
            j++;

        }

    }
}
int num(int arr[],int size)
{
    int n=size;
    int index=0;
    int l=0;
    int r=n-1;
    while (index<=r) 
    {
       if(arr[index]==0)
       {
        swap(arr[index],arr[l]);
        l++;
        index++;
       }
       else if(arr[index]==2)
       {
        swap(arr[index],arr[r]);
        r--;


       }
       else
       {
        index++;
       }


       
    }


}
int modu(vector <int> &n,int k)
{
    int f=n.size();
    vector <int> ans;
    for(int index=0;index<f;index++)
    {
        int newindex=(k+index)%f;
        ans[newindex]=n[index];

    }
    n=ans;
   // returnn;

   

   
}
int main()
{
    // int arr[5]={3,5,-4,-8,50};
    // int size=5;
    // negativeahead(arr,size);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // int arr[]={2,0,2,1,2,1,1,2};
    // int size=8;
    // num(arr,size);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    vector <int> v;
    v.push_back(10);
     v.push_back(20);
      v.push_back(30);
       v.push_back(40);
        v.push_back(50);
         v.push_back(70);
         int s=v.size();
           for(int i=0;i<s;i++)
        {
            cout<<v.at(i)<<" ";
         }
        missingno(v);
    //     int s=v.size();
    //       for(int i=0;i<s;i++)
    //      {
    //         cout<<v.at(i)<<" ";
    //      }
        //  int k=3;
        //  modu(v,3);
        // int s=v.size();
        //  for(int i=0;i<s;i++)
        //  {
        //     cout<<v.at(i)<<" ";
        //  }
        int arr[][4]={ {1,0,0,0},
        {0,1,1,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}};
        int r=5;
        int c=4;

        int t=0;
        int max=INT_MIN;
        for(int i=0;i<5;i++)
        {
            int countone=0;
            for(int j=0;j<4;j++)
            {
                if(arr[i][j]==1)
                {
                    countone++;
                }
            }
            if(countone>max)
            {
                max=countone;
                t=i;
            }
        }
        cout<<t<<" "<<max;


}