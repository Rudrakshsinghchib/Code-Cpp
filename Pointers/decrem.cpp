#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={1,2,4,7,8,11};
    int *p=ar; 
    cout<<*p++<<endl;
    cout<<*p++<<" "<<*p++<<endl;
    cout<<++*p<<endl;
    cout<<*p++<<" "<<--*p<<endl;
    cout<<*p;

}
