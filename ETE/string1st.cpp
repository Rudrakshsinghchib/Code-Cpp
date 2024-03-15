#include<iostream>
#include<string>

using namespace std;

void Con(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        // if(ch[0]>='a' && ch[0]<='z')
        // {
        //     ch[0]=ch[0]-'a'+'A';
        // }

        if (s[i] == ' ')
        {
            s[i+1] = s[i+1]-'a'+'A';
        }
        i++;
    }
    cout<<s<<endl;
    
}

int main() {
    string s;
    getline(cin,s);
    int i = 0;
    while (s[i] != '\0')
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]=s[0]-'a'+'A';
        }

        if (s[i] == ' ')
        {
            s[i+1] = s[i+1]-'a'+'A';
        }  
        i++;
    }
    cout<<s<<endl;


}