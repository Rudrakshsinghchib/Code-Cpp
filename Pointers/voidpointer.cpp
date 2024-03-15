#include<bits/stdc++.h>
using namespace std;
int main()
{
    void *v;
    int a=5;
    float b=1.5;
    char ch='c';
    v=&a;
    cout<<*(int*)v<<endl;
    v=&b;
     cout<<*(float*)v<<endl;
     v=&ch;
      cout<<*(char*)v<<endl;

}
