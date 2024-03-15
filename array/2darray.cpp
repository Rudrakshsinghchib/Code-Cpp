#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printarr(int rr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<rr[i][j]<<" ";
        }
        cout<<endl;
    }
   
}
void columnwise(int arr[][3],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
bool find(int arr[][3],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            {
                return true;         //bool
            }

        }
    }
    return false;
    

}
int columnwisesum(int arr[][3],int row,int col)
{
     for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";

    }

}
int rowwisesum(int arr[][3],int row,int col)
{
     for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";

    }

}
int maxi(int arr[][3],int row,int col,int max)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            
        }
    }
    return max;

}
void diagonalsum(int arr[][3],int row,int col)
{
    //int sum=0;
    for(int i=0;i<row;i++)
    {
        cout<<arr[i][i]<<" ";

    }
    //cout<<sum;
    

}
void transpose(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



}

int main()
{
    // int arr[3][4]={{1,2,3,4},
    // {14,2,4,3},
    // {6,8,9,4,}
    // };
    // int row=3; 
    // int col=4;
    // printarr(arr,row,col); 
    int s[3][3]={{2,3,4},
    {4,20,6,},
    {7,8,9}};
    int row=3;
    int col=3;
   //columnwisesum(s,row,col); 
   //rowwisesum(s,row,col);
//    int max=INT_MIN;
//    cout<<maxi(s,row,col,max);
//diagonalsum(s,row,col);
   

//    int target=5;
//    find(s,row,col,target);

    // swap method to transpose 2d array
    // 2d vector
     transpose(s,row,col);

    // vector<vector<int> > brr(5,vector<int>(10,0));

    // for(int i=0;i<brr.size();i++)
    // {
    //     for(int j=0;j<brr[i].size();j++)
    //     {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;

    // }
    //jagged array
    


}
