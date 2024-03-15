#include<iostream>
using namespace std;
#define PI 3.14
int area(int r)
{
    return PI * r * r;
}
int circum(int r)
{
    return 2* PI* r;
}
int main()
{
    int r=4;
    cout<<area(r)<<endl;
    cout<<circum(r)<<endl;
}