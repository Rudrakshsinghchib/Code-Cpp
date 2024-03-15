#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int a;
    cout<<"Enter a"<<endl;
    cin>>a;
    int b;
    cout<<"enter b"<<endl;
    cin>>b;
    switch(n)
    {
        case 1:
        cout<<a*b<<endl;
        break;
        case 2:
        cout<<a+b<<endl;
        break;
        case 3:
        cout<<a-b<<endl;
        break;
        case 4:
        cout<<a/b<<endl;
        break;
        default:
        cout<<"yo";*/
        int a;
        cout<<"enter a";
        cin>>a;
        int b;
        cout<<"enter b";
        cin>>b;
        char op;
        cout<<"enter op";
        cin>>op;
        switch(op)
        {
            case '+':
            cout<<a+b<<endl;
            break;
            case '*':
            cout<<a*b<<endl;
            break;
        }

    }
