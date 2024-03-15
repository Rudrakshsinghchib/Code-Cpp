#include<iostream>
int x=2;        //global variable

using namespace std;
int main()
{
    ::x=50;                                 //::used to access global variable
    cout<<x<<endl;
    int x=90;
    cout<<x<<endl;
    {
        ::x=8;
        cout<<::x<<endl;
        int x=40;
        cout<<x<<endl;
    }
    cout<<x<<endl;

}