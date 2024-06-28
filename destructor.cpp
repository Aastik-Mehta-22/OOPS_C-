#include<bits/stdc++.h>
using namespace std;

class Teacher{

    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    Teacher(){
        cout<<"Hi i am constructor";
    }
    ~Teacher(){
        cout<<"Destructor called";
    }

};


int main()
{
    Teacher t1; 
}