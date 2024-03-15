#include<iostream>
using namespace std;
bool prime(int m)
{
    int i;
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            return 1;


        }
        return 0;

    }

}
int main()
{
    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<"ni ha";
    }
    else
    {
        cout<<"ha";
    }
}


    

    
