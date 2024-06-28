#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties / attributes
    public:
    string name;
    string dept;
    string subject;
    double salary;

    //methods / member functions 
    void changeDept(string newDept){
        dept = newDept;
    }
};

class Student{
    public:
    string name;
    int rollno;
    int age;
};


int main()
{
    Teacher t1; // t1 is a object 
    t1.name = "Aastik";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary= 25000;

    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    

    return 0;
}

class Teachersecond{

    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    //setter (private values ko set krna)
    void setSalary(double s){
        salary = s;
    }

    //getter (private values ko get krna)
    double getSalary(){
        return salary;
    }
};
