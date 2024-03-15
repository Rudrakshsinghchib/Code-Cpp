#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void sound()
    {
        cout<<"animal produce sound"<<endl;
    }

};
class dog:public animal
{
    public:
    void sound() 
    {
        cout<<"bark sound"<<endl;
    }
};
class cat:public animal
{
    public:
    void sound()
    {
        cout<<"meow sound"<<endl;
    }
};
class parrot:public animal
{
    public:
    void sound()
    {
        cout<<"methu methu"<<endl;
    }
};
// void sound(animal*animal)
// {
//     animal->sound();  //polymorphic
//     //animal->sound is behacving as per required object allocated at runtime
// }
void baby(animal*b)
{
    b->sound();
}

int main()
{
    animal*animal=new dog();
    baby(animal);

    animal=new cat();
    baby(animal);
    animal=new parrot();
    baby(animal);

    

}