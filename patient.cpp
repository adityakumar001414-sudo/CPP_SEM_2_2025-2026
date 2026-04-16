#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    string name;
    int age;
    double billingAmount;
    string appointmentDate;

public:
    Patient()
    {
        name = "Not Available";
        age = 0;
        billingAmount = 0.0;
        appointmentDate = "Not Scheduled";
    }

    Patient(string n, int a, double b, string d)
    {
        name = n;
        age = a;
        billingAmount = b;
        appointmentDate = d;
    }

    void acceptDetails()
    {
        cout << "Enter Patient Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Billing Amount: ";
        cin >> billingAmount;
        cin.ignore();
        cout << "Enter Appointment Date: ";
        getline(cin, appointmentDate);
    }

    void displayDetails()
    {
        cout << "----------------------------------------" << endl;
        cout << "Patient Name      : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Billing Amount    : " << billingAmount << endl;
        cout << "Appointment Date  : " << appointmentDate << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main()
{
    Patient p1;
    cout << "Default Constructor Details" << endl;
    p1.displayDetails();

    cin.ignore();
    Patient p2;
    cout << endl << "Enter Details for Patient Using User Input" << endl;
    p2.acceptDetails();
    p2.displayDetails();

    Patient p3("Rahul Sharma", 25, 1500.50, "20-04-2026");
    cout << endl << "Parameterized Constructor Details" << endl;
    p3.displayDetails();

    return 0;
}