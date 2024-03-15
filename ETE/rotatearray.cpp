#include <bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int n, int k)
{
    k %= n; // In case k is greater than n
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}                                                                   
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    { 
        cin >> arr[i];
    }

    int k;
    cin>>k;

    rotateArray(arr, n, k);
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}