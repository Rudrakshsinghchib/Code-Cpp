#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p[n-1];
	    for(int i =0; i<n-1;i++){
	        cin>>p[i];
	    }
	    int sum=0;
	    for(int i=0; i<n-1;i++){
	        sum=sum +p[i];
	    }
	    sort(p , p+n-1);
	    cout<<sum+p[n-2]<<endl;
	    
	}
	return 0;
}
