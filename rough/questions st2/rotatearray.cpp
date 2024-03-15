#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rotatearray(int a[ ] , int k , int n){
    int b[n];
    int j =0;
    for(int i =k;i<n;i++){
        b[j] = a[i];
        j++;
    }
    for(int i =0; i<k; i++){
        b[j] =a[i];
        j++; 
    }

    for(int i =0; i<n; i++){
        cout<<b[i]<<" ";
     }
}
int main()
{
    int n;
    n=8;
    int *arr=new int(n);
    int k=2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotatearray(arr,k,n);
}