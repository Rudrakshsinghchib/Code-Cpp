#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=9;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;
    //*q=*p; /// here q is pointing to unknown location so firstly assign it to 
    cout<<a<<" "<<*p<<" "<<*q<<" ";



}