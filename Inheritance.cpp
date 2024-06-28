#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
    Person(){
        cout<<"Person constructor";
    }
    ~Person(){
        cout<<"person destructor";
    }
};

class Student : public Person{ // this is called instruction
    // name , age , rollno
    public:
    int rollno;

    Student(){
        cout<<"student constructor";
    }
    ~Student(){
        cout<<"student destructor";
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};

int main()
{
    Student s1;
    s1.name = "rahul kumar";
    s1.age = 22;
    s1.rollno = 1234;

    s1.getInfo();
    // first parent class constructor then student constructor then getinfo
    // and in case of destructor firstly child destructor called then parent destructor called
    return 0;
}