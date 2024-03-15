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
        cout<<"ctor was called ";
    }
    student(int b, int _age, bool _present,string _name,int _nos,string _gf)
    {
        id=b;
        age=_age ;
        present=_present;
        name=_name;
        nos=_nos;
        gf=_gf;

       // gf=_gf;r
        cout<<"Student paremeterized ctor called"<< endl;

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
    // cout<<sizeof(student);
    // student s1;
    // s1.id=23;
    // s1.age=2;
    // s1.present=1;
    // cout<<s1.age<<endl;
    // s1.name="roni";
    // s1.nos=3;
    //s1.gf="ayo"; // cant private

    student s2(1,20,1,"raju",3,"ya");
    cout<<s2.age<<endl;
    cout<<s2.id<<endl;
    
    //cout<<s2.gf<<endl;

//     student *s3= new student(2,3,4,"ara",8,"preeti");
//     //cout<<s3->name<<endl;
//     //cout<<(*s3).name<<endl;
//     //cout<<s3->gf<<endl;

//    // delete s3; //no leak

//     s2.age=12;
//     s2.name="raju";
//     s2.present=0;

}
