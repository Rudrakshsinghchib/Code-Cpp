#include<iostream>
using namespace std;
int main()
{
    int c=23;
    {
         c=c+1;
    }
    cout<<c;

    {
         c=c+1;
    }


    cout<<c;
}

//scope of variable
