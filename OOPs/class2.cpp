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
    int *v;
    //ctor    agar khud ni toh compiler add kar daga its mandatory
    // no khokala students
    student()
    {
        cout<<"ctor was called";
        
    }
    student(int _id, int _age, bool _present,string _name,int _nos,string _gf)
    {
        id=_id;
        age=_age ;
        present=_present;
        name=_name;
        nos=_nos;
        gf=_gf;
        int *v=new int(10);

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


     ~student() {
        cout<<"dtor was called"<<endl;
        delete v;    // dtor is used to delete heap allocated memory 

    }

    string getgfname()
    {
        return gf;
    }
    void setgfname(string gf)
    {
        this->gf=gf;
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
    //copy ctor
    student s1(3,12,1,"Bankai",6,"priyanka");
    student s2;
    s2=s1;
    cout<<s2.name<<endl;
     cout<<s1.name<<endl;
    
    s1.setgfname("papi");
    cout<<s1.getgfname()<<endl;




   

}