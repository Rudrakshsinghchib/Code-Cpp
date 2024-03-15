#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rotate(int arr[],int n,int k)
{
    int b[n];
    int j=0;
    for(int i=n-k;i<n;i++)
    {
        b[j]=arr[i];
        j++;

    }
    for(int i=0;i<n-k;i++)
    {
        b[j]=arr[i];
        j++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }



}
int main()
{
    int ar[]={1,2,3,4,5,6,7};
    int n=7;
    int k=2;
    rotate(ar,n,k);

}