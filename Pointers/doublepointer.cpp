#include<iostream>
using namespace std;
int main()
{
    int a=10;
   
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=12;
    **q=17;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<***r<<endl;
    cout<<"adreess"<<r<<" "<<&q<<endl;
    cout<<"adress of p"<<q<<" "<<&p<<endl;

}