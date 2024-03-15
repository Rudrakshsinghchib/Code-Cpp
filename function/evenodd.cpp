//last bit check hogi bas and even no. kaa last bit hamsha 0
#include<iostream>
using namespace std;
bool iseven(int s)
{
    if(s&1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cin>>num;
    if(iseven(num))
    {
        cout<<"num is even";
    }
    else
    {
        cout<<"num is odd";

    }

}