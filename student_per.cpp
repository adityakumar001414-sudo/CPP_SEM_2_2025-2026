#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;


class Student {
private:
    string name;
    float marks[3];
    float total;
    float percentage;

public:
    
    void acceptDetails() {
        cout << "Enter Student Name: ";
        cin.ignore(); 
        getline(cin, name);
        
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
        
     
        calculateTotal();
        calculatePercentage();
    }

  
    void calculateTotal() {
        total = marks[0] + marks[1] + marks[2];
    }


    void calculatePercentage() {
        percentage = (total / 300.0) * 100.0;
    }

   
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

    
    cout << "===== STUDENT DATABASE SYSTEM =====" << endl;
    cout << "Enter the number of students: ";
    cin >> count;

    
    Student s[count];

  
    for (int i = 0; i < count; i++) {
        cout << "\nRecording Data for Student #" << i + 1 << ":" << endl;
        s[i].acceptDetails();
    }


    cout << "\n" << string(65, '=') << endl;
    cout << left << setw(5) << "Sr." 
         << setw(15) << "Name" 
         << setw(8) << "Sub1" 
         << setw(8) << "Sub2" 
         << setw(8) << "Sub3" 
         << setw(10) << "Total" 
         << "Percentage" << endl;
    cout << string(65, '-') << endl;



    
    for (int i = 0; i < count; i++) {
        s[i].displayDetails(i + 1);
    }
    cout << string(65, '=') << endl;

    return 0;
}
