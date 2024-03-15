#include<iostream>
#include<vector>
using namespace std;
int print(vector<int> b )
{
    int n=b.size();
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

}
int selection(vector<int> &b )
{
    int n=b.size();
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(b[j]<b[min])
            {
                min=j;
            }

        }
        swap(b[i],b[min]);
    }
}
int main()
{
    vector<int> b ={44,33,55,22,11};
    selection(b);
    print(b);


}