#include<iostream>
using namespace std;
void sortedarray(int a[],int n){
    int i=1;
    int j=0;
    while(i<n){
        if(a[j]==a[i]){
            i++;
        }
        else{
            j++;
            a[j]=a[i];
            i++;
        }
    }
    for(int i =0; i<=j;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n=10;
    int a[10] = {1,1,1,2,2,3,3};
    sortedarray(a,n);
}