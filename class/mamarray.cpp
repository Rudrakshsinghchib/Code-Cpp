// write a c++ program to take an array of integer and rearrange its elements such that all the even numbers appeat before odd number maintaining the original order of all elements .
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={4,7,8,2,9,6};
    int n=6;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            int krr[n];
            for(int i=0;i<n;i++)
            {
                krr[i]=arr[i];
            }


        }
        for(int i=0;i<n;i++)
        {
            //cout<<krr[n];
        }
    }



}