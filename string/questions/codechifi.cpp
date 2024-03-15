 #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string f="CODETOWN";
        for(int i=0;i<8;i++)
        {
            if(s[i]==f[i])
            {
                continue;
            }
            else if(s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='F' || s[i]=='G' || s[i]=='H' ||
                 s[i]=='J' || s[i]=='K' || s[i]=='L' || s[i]=='M' || s[i]=='N' ||
                 s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S' || s[i]=='T' || s[i]=='V' || 
                 s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z' && 
                 f[i] == 'A' || f[i] == 'E' || f[i] == 'I'|| f[i] == 'O' || f[i] == 'U' )
                 {
                    continue;
                 }
            else if(f[i]=='B' || f[i]=='C' || f[i]=='D' || f[i]=='F' || f[i]=='G' || f[i]=='H' ||
                 f[i]=='J' || f[i]=='K' || f[i]=='L' || f[i]=='M' || f[i]=='N' ||
                 f[i]=='P' || f[i]=='Q' || f[i]=='R' || f[i]=='S' || f[i]=='T' || f[i]=='V' || 
                 f[i]=='W' || f[i]=='X' || f[i]=='Y' || f[i]=='Z' && 
                 s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U' )
                {
                    continue;
                }
            else
            {
               if(f[i] == 'A' || f[i] == 'E' || f[i] == 'I'|| f[i] == 'O' || f[i] == 'U' 
               && s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U')

               {
                 s[i]=f[i];
               }
               else
               {
                s[i]=f[i];
               }

            

            }
        }
        
        
    
        if(s.compare(f) == 0) {
        cout << "YES" << endl;
        }
        else {
        cout << "NO " << endl;
        }
    }

}
