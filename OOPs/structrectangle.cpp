#include<iostream>
using namespace std;
struct rect
{
    
    float length;
    float width;

};
int main()
{
    struct rect r1,r2;
    cout<<"Length of first rect"<<endl;
    cin>>r1.length;
    cout<<"width of first rect"<<endl;
    cin>>r1.width;
    cout<<"Length of second rect"<<endl;
    cin>>r2.length;
    cout<<"width of second rect"<<endl;
    cin>>r2.width;
    float area1,area2;

    area1=r1.length*r1.width;
    area2=r2.length*r2.width;

    if(area1>area2)
    {
        cout<<"first rectangle area greater";
    }
    else if (area1<area2)
    {
        cout<<"second rectangle area greater";
    }
    else if(area1=area2)
    {
        cout<<"equal";
    }
    

   







}