// main concept copy banA DATA HA FUNCTION main ma value same hi rhta as you can see
#include<iostream>
using namespace std;
void dum(int n)
{
    n++;
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    dum(n);
    cout<<"n is "<<n;
}
//call by value and call by reference
#include<iostream>
using namespace std;
////call by value
int increment(int n)
{
    n=n+1;
    return n;

}
//call by reference
int yo(int &k)
{
    k=k+1;
    return k;
}
int main()
{
    int n=9;
    yo(n);
    //cout<<increment(n);
    cout<<n;
    // int &k=n;
    // int &c=n;
    // cout<<k<<endl;
    // cout<<n<<endl;
    // cout<<c<<endl;

    // k++;
    //    cout<<k<<endl;
    // cout<<n<<endl;
    // cout<<c<<endl;

}
