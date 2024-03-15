
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){

    int n;
    cin>>n;

    string s;

    s=to_string(n);

    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            s[i]='5';
        }
    }

    cout<<s;

}