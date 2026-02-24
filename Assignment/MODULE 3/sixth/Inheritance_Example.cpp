#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person
{
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r)
    {
        setPerson(n, a);   // Reusing base class function
        rollNo = r;
    }

    void displayStudent()
    {
        displayPerson();   // Reusing base class function
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class Teacher
class Teacher : public Person
{
private:
    string subject;

public:
    void setTeacher(string n, int a, string s)
    {
        setPerson(n, a);   // Reusing base class function
        subject = s;
    }

    void displayTeacher()
    {
        displayPerson();   // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    s.setStudent("Mahima", 19, 110);
    t.setTeacher("Dr. Sharma", 40, "Mathematics");

    cout << "\n--- Student Details ---\n";
    s.displayStudent();

    cout << "\n--- Teacher Details ---\n";
    t.displayTeacher();

    return 0;
}