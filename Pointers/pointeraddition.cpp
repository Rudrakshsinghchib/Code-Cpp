#include<iostream>
using namespace std;
int main()
{
    int ar[]={1,4,6,2,-8};
    int *p=&ar[0];
    int *q=&ar[0];
    // cant q+p;
    cout<<p<<endl;
    cout<<*p<<endl;
    p=p+1;
    //*p=7;
    cout<<p<<endl;
    cout<<*p<<endl;

}