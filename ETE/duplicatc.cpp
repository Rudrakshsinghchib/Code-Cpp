#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }

        
    }

    for(int j=0;j<n;j++)
        {
            if(a[j]==a[j+1])
            cout<<a[j]<<" ";

        }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bubble(a,n);
    

}