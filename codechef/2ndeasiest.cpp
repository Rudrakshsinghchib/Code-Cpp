#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x[n];
	for(int i=1;i<=n;i++)
	{
	    cin>>x[i];
	    
	}
	for(int i=1;i<=n;i++)
	{
	    if(x[i]<=10)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
}
