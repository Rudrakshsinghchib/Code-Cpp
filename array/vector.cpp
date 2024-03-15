#include<iostream>
#include <vector>
using namespace std;
void print( vector<int> v)
{
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}
void print2(vector<int>t) //differnet method too print
{
    for(auto it:t)
    {
        cout<<it<<endl;
    }

}
// void fun(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }
// {         // static is already know                // int arr[n]=not good i know why
//     int n;
//     cin>>n;
//     int *arr= new int[n];    // each element 0 or garbage
//     for(int i=0;i<n;i++)
//     {
//         int t;
//         cin>>t;
//         arr[i]=t;
//     }
//     fun(arr,n); // still if now i have to get more inout or values in it after allocation,cant do anything 

// so to solve all this vector comes
int main()
{
    // vector<int>arr(5,8);
    // arr.push_back(46);
    // print(arr);
    // arr.pop_back();
    // print(arr);
    // vector<int>arr2={3,4,5,8,3};
    // vector<int>arr7(arr2);  //copying array
    // print(arr2);
    vector<char> c;
    c.push_back('a');
    c.push_back('b');
    c.push_back('c');
    cout<<c[0]<<endl;

    cout<<c.front()<<endl;
    //cout<<c[sizeof(c)-1]<<endl;
    cout<<c[c.size()-1]<<endl;
    cout<<c.back()<<endl;

    vector<int>f; // ya
    f.push_back(6);
     f.push_back(2);
      f.push_back(2);
       f.push_back(4);
       print2(f);





//     vector<int> v;
//     v.push_back(8);
//       v.push_back(3);
//       v.push_back(7);
//           v.push_back(9);
        
//     print(v);
// //     v.pop_back();
// //    print(v)
// for(int i=0;i<10;i++)
// {
//     v.push_back(80);
// }
// print(v);

// v.clear();
// print(v);


    




}
