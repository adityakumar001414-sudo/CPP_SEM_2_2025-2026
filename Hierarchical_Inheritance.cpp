#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;

    void getEmp() {
        cin >> name >> id;
    }
};

class Department : public Employee {
public:
    string dept;
};

class PF : public Department {
public:
    float pf;

    void display() {
        cout << name << " " << id << " " << dept << " " << pf;
    }
};

int main() {
    PF p;
    cout << "Enter name, id, dept, pf:\n";
    cin >> p.name >> p.id >> p.dept >> p.pf;
    p.display();
    return 0;
}