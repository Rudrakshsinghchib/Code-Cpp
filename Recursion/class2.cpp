#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void integer(int num,vector <int> &s)
{
    if(num==0)
    return;

    int digit=num%10;

    num=num/10;

    integer(num,s);

    s.push_back(digit);

}
void solve(int arr[],int size,int index, vector <int>   &v)
{
    if(index>=size)
    {
        return;
    }
    if(arr[index]%2==0)
    {
        v.push_back(arr[index]);
    }
    solve(arr,size,index+1,v);
}

void minimum(int arr[],int size,int index,int &mini)  // variables always do refrence ni toh save ni hoga data
{
    if(index>=size)
    {
        return;
    }
    mini=min(mini,arr[index]);
    minimum(arr,size,index+1,mini);
    


}
bool targetfind(int arr[],int size,int index,int target)
{
    if(index>=size)
    {
        return false;
    }
    if(arr[index]==target)
    {
        return true;
    }

    bool ans=targetfind(arr,size,index+1,target);
    return ans;


}
void arry(int arr[],int size,int index)
{
    if(index>=size)
    {
        return ;
    }

   // cout<<arr[index]<<" ";

    arry(arr,size,index+1);
    cout<<arr[index]<<" ";

}
int main()
{
    int num=4567;
    vector <int> s;
    integer(num,s);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }





    // int a[]={10,29,30,49,59};
    // int size=5;
    // int index=0;
    // int target=20;
    // int mini=INT_MAX;
    //vector<int> yo;
    // minimum(a,size,index,mini);
     //cout<<mini;
    //   solve(a,size,index,yo);
    //   for(int num:yo)
    //   {
    //     cout<<num<<" ";
    //   }

    // bool t= targetfind(a,size,index,target);
    // if(t)
    // {
    //     cout<<"found";
    // }
    // else
    // {
    //     cout<<"not found";
    // }
   
    //arry(a,size,index);

}