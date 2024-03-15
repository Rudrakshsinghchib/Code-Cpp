#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name[20];
    float cgpa;

};
int main()
{
    struct student s;
    cout<<"the roll"<<endl;
    cin>>s.roll;
    cout<<"the name"<<endl;
    cin>>s.name;
    cout<<"the cgpa"<<endl;
    cin>>s.cgpa;

    cout<<"ALL details filled";
    
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.cgpa<<endl;

}