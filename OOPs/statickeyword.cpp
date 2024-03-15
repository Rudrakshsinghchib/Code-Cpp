#include<iostream>
using namespace std;
class abc
{
    public:
    static int  x,y;

    void print() const
    {
        cout<<x<<" "<<y<<endl;
        // cout<<this->x<<" "<<this->y<<endl; this is waht distinguish them  happening
    }
    // static void print() 
    // {
    //     printf("I am the best\n");
    //     //cout<<x<<" "<<y<<endl;
    //     // cout<<this->x<<" "<<this->y<<endl; this is waht distinguish them  happening
    // }


};

// int abc::x;
// int abc::y;
// int main()
// {
//     abc ob1;
//     abc obj2;
    
//     ob1.print();
//     obj2.print();
    
// }

int main()
{ 
    //static data member 
    abc obj1;
    obj1.x=6;
    obj1.y=3;
    obj1.print();

    abc obj2;
    obj2.x=10;
    obj2.y=80;
    obj2.print();
    obj1.print();
        


}

// int main()
// {
    
//     abc ob1={1,2};
//     abc obj2={4,5};
//     ob1.print();
//     obj2.print();
// }
