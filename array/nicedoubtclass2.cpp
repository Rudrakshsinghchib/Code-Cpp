#include<iostream>                                      //    l-2
using namespace std;
int main()
{
    int ar[3][3]={{1,2,3},{4,5,6},{7,8,9}
    };
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(ar[i][j],ar[j][i]);
        }
        

    }
    for(int x=0;x<3;x++)
    {
        for(int k=2;k>=0;k--)
        {
            cout<<ar[x][k]<<" ";
        }
        cout<<endl;
    }
}