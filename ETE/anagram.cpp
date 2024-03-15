#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool anagram(string str1, string str2)
{
    int n=str1.length();
    int k=str2.length();
    if(n!=k)
    {
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
        {
            return false;
        }

    }
    return true;

// {
//     int n1 = str1.length();
//     int n2 = str2.length();
//     if (n1 != n2)
//     {
//         return false;
//     }
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());

//     for (int i = 0; i < n1; i++)
//     {
//         if (str1[i] != str2[i])
//         {
//             return false;
//         }
//         return true;
//     }
}

int main()
{
    string str1;
    string str2;
    cout << "enter str1: ";
    cin >> str1;
    cout << "enter str2: ";
    cin >> str2;
    if (anagram(str1, str2))
    {
        cout << "anagram" << endl;
    }
    else
    {
        cout << "not anagram" << endl;
    }
     

    return 0;
}