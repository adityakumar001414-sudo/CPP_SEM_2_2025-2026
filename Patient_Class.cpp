#include <iostream>
using namespace std;

class Patient {
    string name;
    float bill;
    string date;

public:
    // Default constructor
    Patient() {
        name = "Unknown";
        bill = 0;
        date = "Not Set";
    }

    // Parameterized constructor
    Patient(string n, float b, string d) {
        name = n;
        bill = b;
        date = d;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Bill: " << bill << endl;
        cout << "Appointment Date: " << date << endl;
    }
};

int main() {
    Patient p1;
    Patient p2("Rahul", 2000, "10-03-2026");

    p1.display();
    cout << endl;
    p2.display();

    return 0;
}