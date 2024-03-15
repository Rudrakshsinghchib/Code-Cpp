#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c,v;
	int f;
    int d=0;
	while(n--)
	{
	    cin>>c>>v;
	    f=c*v;
	    while(f>0)
	    {
	        d++;
	        f=f/10;
	        
	    }
        
	    if(d==5)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	    
	    
	   
	    
	    
	}
}
