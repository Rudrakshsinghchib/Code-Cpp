#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int rem = temp% 10;
        ans = ans + (rem*rem*rem);
        temp = temp / 10;
    }
    
    if (ans == n)
    {
        cout<<"yes"<<endl;
    }

    else
    cout<<"no"<<endl;
    
    
   
}