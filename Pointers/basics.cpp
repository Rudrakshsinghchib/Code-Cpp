#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=9;
    int *p=&a;
    int *q=&b;
    int c=*q;
    cout<<"address of a "<<p<<endl;
      cout<<"address of a "<<&a<<endl; 
      cout<<"value of a "<<*p<<endl;
     cout<<"value of a "<<a<<endl;
            cout<<c<<endl;
            // maam taught comma operator precidence
    

 
    

}