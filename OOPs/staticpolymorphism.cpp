#include<iostream>                       
using namespace std;
// int add(int a,int b) 
// {
//     return a+b;
// }
// double add(double a,double b)      //function overloading to attain static polymorphism
// {
//     return a+b;
// }


class vector{
    double x,y;
    public:

    void display()
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }

    //init list
    vector(double x,double y): x(x),y(y) {}


    //operator overloading
    void operator+(const vector &src)
    {
        this->x=this->x+src.x;
        this->y=this->y+src.y;


    }

    void operator++()
    {
        this->x++;
        this->y++;


    }






};


int main()
{
//    cout<< add(2,3);
//     cout<<endl;
//     cout<<add(4.3,5.6);
      vector v1(2.5,3.0);
      vector v2(1.5,2.5);

     

    //   v1.display();
    //   v2.display();

     v1+v2;
    v1.display();
    //   v2.display();

    // ++v1;
    // v1.display();
    // ++v2;
    // v2.display();




}