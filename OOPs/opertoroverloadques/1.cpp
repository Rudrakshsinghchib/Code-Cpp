#include<iostream>
using namespace std;
class a
{
    int x,y;
    public:
    a(int x,int y):x(x),y(y) {}

    void operator-(const a src)
    {
        this->x-=src.x;
        this->y-=src.y;

    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
    void operator++()
    {
        this->x++;
        this->y++;
    }
    
};
int main()
{
    a b(2,3);
    a c(4,5);

    ++c;
    c.display();

    
}