#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,c,d;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if(a>b && a>c && a>d)
        {
            if(a>(b+c+d))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(b>a && b>c && b>d)
        {
            if(b>(a+c+d))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(c>a && c>b && c>d)
        {
            if(c>a+b+d)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(d>a && d>c && d>b)
        {
            if(d>a+b+c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
            
    }
         
    
}

