#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if('a' || 'z')
    {
        cout<<"lowercase";
    } 
    else if('A' || 'Z')
    {
        cout<<"Uppercase";
    }
    else {
        cout<<"Digits";
    }
}