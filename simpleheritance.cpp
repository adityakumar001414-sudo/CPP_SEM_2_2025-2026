#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void acceptPerson()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;
    string course;
    double marks;

public:
    void acceptStudent()
    {
        acceptPerson();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
        cout << "Enter Marks: ";
        cin >> marks;
        cin.ignore();
    }

    void displayStudent() const
    {
        cout << endl;
        cout << "----- Student Details -----" << endl;
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.acceptStudent();
    s.displayStudent();
    return 0;
}