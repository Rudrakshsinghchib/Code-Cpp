//1330
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=1,t=2,w=3,s=4;
    w=n;
    switch(d)
    {
        case 1:
        d=n/100;
        n=n-(d*100);
       
        case 2:
        t=n/50;
        n=n-(t*50);
        
        case 3:
        w=n/20;
        n=n-(w*20);

        case 4:
        s=n/1;
        n=n-(s*1);

    }
    cout<<"100="<<d<<endl;
    cout<<"50="<<t<<endl;
    cout<<"20="<<w<<endl;
    cout<<"1="<<s<<endl;

}
