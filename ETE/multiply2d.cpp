#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum=0;
            for(int k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;

            }
        }
    }
    cout<<"MUlti matrix"<<endl;;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";

        }
        cout<<endl;
    }


}