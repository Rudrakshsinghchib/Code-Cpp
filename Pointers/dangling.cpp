#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    cout<<*ptr<<endl;
    free(ptr);
    
    cout<<*ptr;


}