#include<iostream>                         //Diamond problem-two solution 1.scope resolution  2.virtual
using namespace std;
class person
{
    public:
    void walk()
    {
        cout<<"walking"<<endl;

    }

};
class teacher: virtual public person
{
    public:
    void teach()
    {
        cout<<"teaching"<<endl;

    }

};
class researcher: virtual public person
{
    public:
    void research()
    {
        cout<<"Researching"<<endl;

    }

};
//multiple inheritance
class Professor:public teacher,public researcher
{
    public:
    void bore()
    {
        cout<<"boring"<<endl;

    }

};
int main()
{
    Professor p;

    // p.teacher::walk();
    // p.researcher::walk();

    p.walk();

}
