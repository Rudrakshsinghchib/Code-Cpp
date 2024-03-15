#include<iostream>
using namespace std;
class bird{
    public:
    int age,weight;
    int nol;
    string colour;
    
    void eat()
    {
        cout<<"Eating "<<endl;

    }
    void fly()
    {
        cout<<"Flying" <<endl;
    }


};
class Pigeon: public bird
{
    public:
    void bankai()
    {
        cout<<"ya"<<endl;
    }
};
class Sparrow: public bird
{
    public:
    void gutter()
    {
        cout<<"guttering"<<endl;
    }
};
int main(){
    Sparrow s;
    Pigeon p;
    //p.bankai
    

}