#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,1,1,1,0,0,0};
    int n =8;
    int l = 0;
    int h = n - 1;
    while(l<h)
    {
        while(arr[l]==0 && l<h)
        {
            l++;
        }
        while(arr[h]==1 && l<h)
        {
            h--;
        }

        swap(arr[l],arr[h]);

        l++;
        h--;
    }
    // while (l < h)
    // {
    //     if (arr[l] == 0)
    //     {
    //         l++;
    //     }
    //     else if (arr[h] == 1)
    //     {
    //         h--;
    //     }
    //     else
    //     {
    //         swap(arr[l], arr[h]);
    //     }
    //     l++;
    //     h--;
    // }

    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    cout << arr[5] << " ";
    cout << arr[6] << " ";
    cout << arr[7] << " ";
    // cout<<arr[8]<<" ";
}