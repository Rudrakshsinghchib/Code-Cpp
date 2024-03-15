#include<iostream>
#include<string>
using namespace std;


int main(){

    string s = "helloworld";

    string s1 = s.substr(0,4); //7 not tken
    string s3=s.substr(4,7);
    string s2 = s.substr(7,9);

    string s4 = s3+ s2 + s1;
   //cout<<s2.append(s1);

    cout<<s4;
}
