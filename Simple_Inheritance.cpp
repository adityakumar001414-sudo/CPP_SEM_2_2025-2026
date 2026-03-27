#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void getData() {
        cout << "Enter Name & Roll: ";
        cin >> name >> roll;
    }
};

class Result : public Student {
    int marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks;
    }
};

int main() {
    Result r;
    r.getData();
    r.getMarks();
    r.display();
    return 0;
}