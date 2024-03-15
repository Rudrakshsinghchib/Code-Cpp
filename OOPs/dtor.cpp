#include<iostream>
using namespace std;
class student {
    private:
    string gf;

    public:
    int id;
    int age;
    string name;
    bool present;
    int nos;
    //ctor    agar khud ni toh compiler add kar daga its mandatory
    // no khokala students
    student()
    {
        cout<<"ctor was called"<<endl;
    }
    student(int _id, int _age, bool _present,string _name,int _nos,string _gf)
    {
        id=_id;
        age=_age ;
        present=_present;
        name=_name;
        nos=_nos;
        gf=_gf;

       // gf=_gf;
        cout<<"Student paremeterized ctor called"<< endl;

    }

    student(const student &srcobj)
     {
        cout<<"Copy ctor called"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->present=srcobj.present;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
        this->gf=srcobj.gf;
     }

     ~student()
     {
        cout<<"dtor called"<<endl;
     }
    void study()
    {
        cout<<"studying";
    }
    void gaming()
    {
        cout<<"gaming";
    }
    private:
    void chatting()
    {
        cout<<"chatting";
    }
   

};

int main()
{
    
    //     student s2;
    //     student s1(3,12,1,"Bankai",6,"pinki");   //    DOUBT
    //    cout<<s1.name<<endl;
    {
         student s1(3,12,1,"Bankai",6,"pinki");

    }
    student s2;





}