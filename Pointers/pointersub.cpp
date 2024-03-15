#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,3,0,-7};
    int *p=&a[0];
    int *q=&a[3];
    cout<<p-q<<endl;
    cout<<*q<<endl;
    cout<<q-p<<endl;
    q=q-2;
    cout<<*q<<endl;
    p=p+2;
    cout<<q-p<<endl;
    q=q-2;
    cout<<*q;
      



}