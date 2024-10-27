#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    return 1;
    int f=n+sum(n-1);
    return f;
}
int fibo(int n)
{
    if(n==1)
    return 1;
    if(n==0)
    return 0;

    int f=fibo(n-1)+fibo(n-2);
    return f;
}
int pow(int n)
{
    if(n==0)
    {
        return 1;
    }
    int ans=2*pow(n-1);
    return ans;
}
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;        // base case 
    }
    int facto=n*fact(n-1);             // recursion calling
    return facto;


}
void counting(int n)
{
    if(n==1)
    {
        cout<<'1'<<" ";
        return;

    }
   // cout<<n<<" ";   
    counting(n-1);   
    cout<<n<<" "; 
    
}
int main()
{
   // cout<<fact(6);
   // counting(10);
   //cout<< pow(5);
  cout<<fibo(8);
 // cout<<sum(4);
    

}
