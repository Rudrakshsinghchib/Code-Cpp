#include<iostream>
#include<string>
using namespace std;


int main(){

    string s = "helloworld";

    string s1 = s.substr(0,7);
    string s2 = s.substr(7,9);

    string s3 = s2 + s1;

    cout<<s3;
}