#include <iostream>
using namespace std;

int main() {
	int r1,r2,d1,d2,f1,f2;
	cin>>r1>>r2;
	cin>>d1>>d2;
	if(d1<0)
	{
	    d1=d1-(d1*2);
	}
    if(d2<0)
	{
	    d2=d2-(d2*2);
	}
	f1=r1-d1;
	f2=r2-d2;
	if(f1>f2)
	{
	    cout<<"Dominater"<<endl;
	}
	if(f2>f1)
	{
	    cout<<"Everule"<<endl;
	}
}
