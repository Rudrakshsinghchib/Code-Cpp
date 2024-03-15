#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string s1;
    getline(cin,s1);

    cout<<s.find(s1);
    
   
    while(s.find(s1)!= string ::npos) //no position
    {
        s.erase(s.find(s1),s1.length());
    }
    cout<<s;



    
}