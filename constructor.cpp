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


int main()
{
    Teacher t1;  // constructor called (memory allocation done)
}


// defining the constructor within the class
#include <iostream>
using namespace std;
class student {
	int rno;
	char name[50];
	double fee;

public:
	// constructor
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Fee:";
		cin >> fee;
	}

	void display()
	{
		cout << endl << rno << "\t" << name << "\t" << fee;
	}
};

int main()
{
	student s; // constructor gets called automatically when
			// we create the object of the class
	s.display();
	return 0;
}



// defining the constructor outside the class
#include <iostream>
using namespace std;
class student {
	int rno;
	char name[50];
	double fee;

public:
	// constructor declaration only
	student();
	void display();
};

// outside definition of constructor
student::student()
{
	cout << "Enter the RollNo:";
	cin >> rno;
	cout << "Enter the Name:";
	cin >> name;
	cout << "Enter the Fee:";
	cin >> fee;
}

void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}

// driver code
int main()
{
	student s;
	s.display();
	return 0;
}
