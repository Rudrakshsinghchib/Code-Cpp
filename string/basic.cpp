#include <iostream>
using namespace std;
int main()
{
//     string name;
// //     //cin>>name; /// gets fucked in space,tab
//     getline(cin,name);6

  //   string temp="j";
  //  // cout<<name<<endl;
  //   cout<<temp.empty()<<endl;

   // cout<<name.length()<<endl;
  // cout<<name[2]<<endl;   //name.at(0);     
   // cout<<name.front()<<endl;
   // cout<<name.back()<<endl;


                                     //append
    string str1;                   
    getline(cin,str1);

    string str2;
    getline(cin,str2);

    str1.append(str2);
    cout<<str1;

  // ERASE
    // string d="this is perfect";
    // d.erase(5,2);
    // cout<<d;
                  //INSERT
    // string i="yo  bunty";
    // string y="ex";
    // i.insert(3,y);
    // cout<<i;

    // string i="name";
    // cout<<i<<endl;
    // i.push_back('R');
    // cout<<i<<endl;

    // i.pop_back();
    // cout<<i<<endl;

    //  string st="the fucks not given";
    //  string st2="fucks";
    //  if(st.find(st2)==string::npos)
    //  {
    //     cout<<"not found"<<endl;
    //  }
    //  else{
    //     cout<<"FOund"<<endl;

    //  }
//     string str1="yo";
//     string str2="yo8";

    if(str1.compare(str2) == 0) {
    cout << "Matching" << endl;
    }
    else {
  cout << "not matching " << endl;
 }


 string desc = "this is a car, big daddy of all suvs";

 cout << desc.substr(25, 2) << endl;









}