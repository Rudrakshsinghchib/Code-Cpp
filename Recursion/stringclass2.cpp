#include<iostream>
using namespace std;
void find(string s,int size,char target,int index)
{
    if(index>=size)
    {
        return;
    }
    if(s[index]== target)
    {
        cout<<index<<" ";

    }

    find(s,size,target,index+1);
}


int main()
{
    string s="babbar";
    int size=6;
    int index=0;
    char target='a';
    find(s,size,target,index);
    //cout<<s[5];


}