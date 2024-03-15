#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,h;
	    cin>>m>>h;
	    int k=m/(h*h);
        cout<<k;
	    
	    if(k<=18)
	    {
	        cout<<1<<endl;
	    }
	    else if(18<k<=24)
	    {
	        cout<<8<<endl;
	    }
	    else if(25<=k<=29)
	    {
	        cout<<3<<endl; 
	    }
	    else if(k>29)
	    {
	        cout<<4<<endl;
	    }
	}

}
