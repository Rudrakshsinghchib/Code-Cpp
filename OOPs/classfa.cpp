#include<iostream>
using namespace std;

class Item{

    string itemname;
    double itemprice;
    int quantity;

    public:

    void I(){
        cin>>this->itemname;
        cin>>this->itemprice;
        cin>>this->quantity;
    }

    int  operator+ ( Item s){

        int r;
        int sum=this->itemprice *this->quantity;
        int sum2=s.itemprice * s.quantity;
        r=sum+sum2;
        return r;

    }

};

int main(){

    Item s;
    Item s2;

    s.I();
    s2.I();

    int r=s+s2;

    cout<<r;

}