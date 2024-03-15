#include <iostream>
using namespace std;
bool validpalindrome(string s,int i,int j)
{
    int k=0;
    int f=s.length()-1;
    while(k<=f)
    {
        if(s[k]==s[f])
        {
            k++;
            f--;
        }
        else{
            return false;
        }

    }
    return true;



}

int main()
{
     string ya;
     getline(cin,ya);
     int l=0;
     int h=ya.length()-1;
     while(h>l)
     {
        if(ya[l]==ya[h])
        {
            l++;
            h--;
        }
        else
        {
            //can remove only one element
            bool ans1=validpalindrome(ya,l+1,h);
            bool ans2=validpalindrome(ya,l,h-1);

            bool t=ans1 || ans2;
            
        }

     }
     cout<<"true";

}