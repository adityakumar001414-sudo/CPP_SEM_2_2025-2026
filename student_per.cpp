#include <iostream>
#include <string>
#include <iomanip> // For formatted table output

using namespace std;

// Requirement 1: Create a class named Student
class Student {
private:
    string name;
    float marks[3];
    float total;
    float percentage;

public:
    // Requirement 1: Accept input from the user
    void acceptDetails() {
        cout << "Enter Student Name: ";
        cin.ignore(); // Clears buffer to allow getline to work
        getline(cin, name);
        
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
        
        // Automatically trigger calculations after input
        calculateTotal();
        calculatePercentage();
    }

    // Requirement 2: Member function to calculate total marks
    void calculateTotal() {
        total = marks[0] + marks[1] + marks[2];
    }

    // Requirement 3: Calculate percentage (assuming 100 marks per subject)
    void calculatePercentage() {
        percentage = (total / 300.0) * 100.0;
    }

    // Requirement 4: Display details in a structured format
    void displayDetails(int srNo) {
        cout << left << setw(5) << srNo 
             << setw(15) << name 
             << setw(8) << marks[0] 
             << setw(8) << marks[1] 
             << setw(8) << marks[2] 
             << setw(10) << total 
             << fixed << setprecision(2) << percentage << "%" << endl;
    }
};

int main() {
    int count;

    // Requirement 5: Accept and display details of multiple students
    cout << "===== STUDENT DATABASE SYSTEM =====" << endl;
    cout << "Enter the number of students: ";
    cin >> count;

    // Create an array of Student objects
    Student s[count];

    // Input loop
    for (int i = 0; i < count; i++) {
        cout << "\nRecording Data for Student #" << i + 1 << ":" << endl;
        s[i].acceptDetails();
    }

    // Display Table Header
    cout << "\n" << string(65, '=') << endl;
    cout << left << setw(5) << "Sr." 
         << setw(15) << "Name" 
         << setw(8) << "Sub1" 
         << setw(8) << "Sub2" 
         << setw(8) << "Sub3" 
         << setw(10) << "Total" 
         << "Percentage" << endl;
    cout << string(65, '-') << endl;

    // Output loop
    for (int i = 0; i < count; i++) {
        s[i].displayDetails(i + 1);
    }
    cout << string(65, '=') << endl;

    return 0;
}