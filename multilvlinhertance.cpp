#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int empID;
    string name;

public:
    void acceptEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
    }

    void displayEmployee() const
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
    }
};

class Department : public Employee
{
protected:
    string deptName;
    double basicSalary;

public:
    void acceptDepartment()
    {
        acceptEmployee();
        cout << "Enter Department Name: ";
        getline(cin, deptName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cin.ignore();
    }

    void displayDepartment() const
    {
        displayEmployee();
        cout << "Department: " << deptName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

class Manager : public Department
{
private:
    double pfAmount;
    string designation;

public:
    void acceptManager()
    {
        acceptDepartment();
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter PF Amount: ";
        cin >> pfAmount;
        cin.ignore();
    }

    void displayManager() const
    {
        cout << "\n----- Manager Details -----" << endl;
        displayDepartment();
        cout << "Designation: " << designation << endl;
        cout << "PF Amount: " << pfAmount << endl;
    }
};

class Engineer : public Employee
{
private:
    string specialization;
    double pfAmount;

public:
    void acceptEngineer()
    {
        acceptEmployee();
        cout << "Enter Specialization: ";
        getline(cin, specialization);
        cout << "Enter PF Amount: ";
        cin >> pfAmount;
        cin.ignore();
    }

    void displayEngineer() const
    {
        cout << "\n----- Engineer Details -----" << endl;
        displayEmployee();
        cout << "Specialization: " << specialization << endl;
        cout << "PF Amount: " << pfAmount << endl;
    }
};

int main()
{
    Manager m;
    Engineer e;

    cout << "Enter Manager Details" << endl;
    m.acceptManager();

    cout << "\nEnter Engineer Details" << endl;
    e.acceptEngineer();

    cout << endl;
    m.displayManager();
    e.displayEngineer();

    return 0;
}