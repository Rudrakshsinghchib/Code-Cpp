#include<iostream>
using namespace std;
void printarray(char arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"done"<<endl;

}
int main()
{
    // int arr[3]={3,4,8};
    // cout<<arr[2]<<endl;

    // int r[9]={1};
    // printarray(r,9);

    // int rsize= sizeof(r)/sizeof(int);   //36/4  it doesnt give a fuck if you havent  assigned all the regiseterd value 
    // cout<<rsize<<endl;

    // int rud[5]={1,4,5,6,7};
    // printarray(rud,5);

    char ch[3]={'a','b','c'};
    printarray(ch,3);
    

}