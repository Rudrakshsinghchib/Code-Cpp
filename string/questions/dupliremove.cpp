#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<s.length()<<endl;

    string a="";
    int index=0; 
    while(index<s.length())
    {
        if(a.length()>0 && a[a.length()-1]==s[index])
        {
            a.pop_back();

        }
        else
        {
            a.push_back(s[index]);
        }
        index++;
        
    }
    cout<<a;

}
    






























// #include <iostream>

// using namespace std;
// string fun(string n,int t)
// {
//     int i=0;
//     while(i<t)
//     {
//         if(n.at(i)==n.at(i+1))
//         {
//             n.erase(i,2);
//             i=i-1;
//         }
//         i++;
//     }
//     return n;

// }
// int main()
// {
//     string n="axbbxy";
//     int t=6;
//     string f=fun(n,t);
//     cout<<f;


// }