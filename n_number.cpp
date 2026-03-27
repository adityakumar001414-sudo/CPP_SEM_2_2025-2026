#include <iostream>
using namespace std;

class Student {
    int marks[5];
    float total, percentage;

public:
    void getMarks() {
        total = 0;
        cout << "Enter 5 subject marks:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate() {
        percentage = total / 5;
    }

    void display() {
        cout << "Percentage: " << percentage << "%\n";
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getMarks();
        s[i].calculate();
        s[i].display();
    }
    return 0;
}