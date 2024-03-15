#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[] , int n){
    for(int i =0; i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
    }

    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n =5;
    int a[n] ={ 4 ,1,20,3,5};
    bubblesort(a,n);
}