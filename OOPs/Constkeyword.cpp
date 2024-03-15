#include<iostream>
using namespace std;

class abc
{
    int x;
    int *y;
    const int z;
    //int k;

 public:
    // abc()
    // {
    //     x=0;
    //     y= new int(0);
    // }

    // abc(int _x,int _y,int _z)
    // {
    //     x=_x;
    //     *y=_y;
    //     z=_z;
    //    // k=_k;
        
 
    // }
    abc(int _x,int _y,int _z=0) : x(_x),y(new int(_y)), z(_z) {
        cout<<"ayo"<<endl;
        x=x*20;
        //z=29;


    }

    int getX() const
    {
       // x=10;
        return x;
    }

    void setX(int _val)
    {
        x=_val;
    }
    int getY() const
    {
        return *y;
    }
    void setY(int _val)
    {
        *y=_val;
    }
    int getZ() const
    {
        return z;
    }
    // int getK() const
    // {
    //     return k;
    // }

   

};

 void printabc(const abc &a)
 {
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ();
} 

int main()
{
    abc a(1,2,8);
    printabc(a);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;

    

}

int main2()
{
//     const int t=10;
//     //Pointer with const
//     const int *a=new int(2);// value const but pointer not
//     cout<<*a<<endl;
//    // *a=20;
//     int b=30;
//     a=&b;
//     cout<<*a<<endl;


    // int *const a=new int (2);  //value non const but pointer const
    // *a=20;
    // cout<<*a<<endl;
    // int b=50;
    // a=&b;
    

    //now both
    // const int *const a=new int(10);
    // *a=50;
    // int b=20;
    // a=&b;






}