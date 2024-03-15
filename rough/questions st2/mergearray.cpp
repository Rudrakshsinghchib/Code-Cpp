#include<bits/stdc++.h>
using namespace std;
void mergearay(int a[] , int b[] , int n , int k){
    int q=n+k;
    int c[q];
    int p=0;
    for(int i=0; i<n; i++){
        c[p]=a[i];
        p++;
    }
    for(int i=0; i<k; i++){
        c[p] = b[i];
        p++;
    }

   sort(c, c+q);
    for(int i=0; i<q;i++){
        cout<<c[i]<<" ";
    }
}
int main(){
    int n= 4;
    int k =4;
    int a[n] = {4,6,2,3};
    int b[k] = {1,9,8,7};
    mergearay(a,b,n,k);

}