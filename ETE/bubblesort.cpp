#include<iostream>
using namespace std;
void fun(int ar[],int n )
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";

    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    fun(ar,n);

    

}