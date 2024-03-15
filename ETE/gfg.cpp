// #include<iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin>>n;
//     int ar[n];
//     int sum=0;
//     int  t=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//         sum=sum+ar[i];
//     }
//     for(int i=2;i<n-1;i++)
//     {
//         if(sum%i==0)
//         {
//             t=1;
//         }
//     }
//     if(t==1)
//     {
//         cout<<"Not Prime"<<endl;
//     }
//     else
//     {
//         cout<<" Prime"<<endl;
//     }




// }
#include<iostream>
using namespace std;
int prime(int n)
{
    //   int sum=0;
    // for(int i=0;i<n;i++)
    // {
    //     sum=sum+ar[i];
       
    // }
  
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{

    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<"Prime "<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    }
    
   
}