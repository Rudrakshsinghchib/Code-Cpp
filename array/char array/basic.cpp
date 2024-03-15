#include <iostream>
#include<vector>
#include<string.h>
using namespace std;
char length(char ch[]) // also refrence alreadylike  int one
{
    int i=0;
    while(ch[i] !='\0')
    {
        i++;
    }
    return i;
    // for(int i=0;i<100;i++)
    // {
    //     if(ch[i] =='\0')
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         len++;
    //     }
    // }
    // return len;
}

// void reverse(char ch[],int n)
// {
//     int l=0;
//     int h=n-1;
//     while(l<=h)
//     {
//         swap(ch[l],ch[h]);
//         l++;
//         h--;
//     }

// }
void uppercase(char ch[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        ch[i]=ch[i]-'a'+'A';
    }
}

void space(char ch[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='@')
        {
            ch[i]=' ';

        }
    }
    // int i=0;
    // while(ch[i] != '\0')
    // {
    //     if(ch[i]=='@')
    //     {
    //         ch[i]=' ';
    //     }
    //     i++;

    // }
   
}
bool palindrome(char ch[],int n)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        if(ch[l]==ch[h])
        {
            l++;
            h--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];   //can take input without the use of loop(as seen in int)
    cin.getline(ch,100); // in lenth of chacracters,it also count length of spaces ya
    //cout<<"array "<<ch; 
    int n=length(ch);
    // cout<<n<<endl;
    cout<<strlen(ch)<<endl;
    // reverse(ch,n);
    // cout<<ch<<endl;
    uppercase(ch,n);
    cout<<ch<<endl;
    // cout<<ch<<endl;
    // space(ch,n);
    // bool t=palindrome(ch,n);
    // if(t)
    // {
    //     cout<<"VALID"<<endl;
    // }
    // else{
    //     cout<<"INvalid"<<endl;
    // }
    
    
    

    // char temp=ch[4];
    // int value=(int) temp;
    // cout<<"THE null element "<<value;



    
    //cout<<ch[i];
}