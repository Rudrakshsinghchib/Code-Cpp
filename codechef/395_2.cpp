#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int p;
        cin>>p;
        if(p<=3)
        {
            cout<<"Bronze"<<endl; 
        }
        if(p<=6&&p>3)
        {
            cout<<"Silver"<<endl;
            
        }
        if(p>6)
        {
            cout<<"Gold"<<endl;
        }
        t--;
    }
}