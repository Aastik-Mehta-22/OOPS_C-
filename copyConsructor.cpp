#include<bits/stdc++.h>
using namespace std;

class Teacher{

    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    Teacher(){ // constructor
        cout<<"Hi i am constructor";
    }

    Teacher(string name){
        this->name = name;
    }

    void getInfo(){
        cout<<"Name : "<<name;
    }

    Teacher(Teacher &obj){// custom copy constructor;
        cout<<"I am custom copy constructor";
        this->name = obj.name;
    }

};

int main()
{
    Teacher t1("aastik");
    t1.getInfo();
    cout<<endl;
    // Teacher t2(t1);  // default copy constructor -invoked 
    // t2.getInfo();
        Teacher t2(t1);  // default copy constructor -invoked 
    t2.getInfo();


}