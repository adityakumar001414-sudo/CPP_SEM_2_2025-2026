#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string customerName, mobileNumber;
    int tableNumber;
    string item1, item2, item3;
    double price1, price2, price3, total, discount = 0, finalAmount;

    cout << "Enter Table Number: ";
    cin >> tableNumber;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Mobile Number: ";
    getline(cin, mobileNumber);

    cout << "Enter name of Item 1: ";
    getline(cin, item1);
    cout << "Enter price of Item 1: ";
    cin >> price1;
    cin.ignore();

    cout << "Enter name of Item 2: ";
    getline(cin, item2);
    cout << "Enter price of Item 2: ";
    cin >> price2;
    cin.ignore();

    cout << "Enter name of Item 3: ";
    getline(cin, item3);
    cout << "Enter price of Item 3: ";
    cin >> price3;

    total = price1 + price2 + price3;

    if (total > 1000)
        discount = total * 0.10;

    finalAmount = total - discount;

    cout << endl;
    cout << "==============================================" << endl;
    cout << "                 RESTAURANT BILL              " << endl;
    cout << "==============================================" << endl;
    cout << left << setw(20) << "Customer Name" << ": " << customerName << endl;
    cout << left << setw(20) << "Mobile Number" << ": " << mobileNumber << endl;
    cout << left << setw(20) << "Table Number" << ": " << tableNumber << endl;
    cout << "----------------------------------------------" << endl;
    cout << left << setw(20) << "Item" << right << setw(10) << "Price (Rs)" << endl;
    cout << "----------------------------------------------" << endl;
    cout << left << setw(20) << item1 << right << setw(10) << fixed << setprecision(2) << price1 << endl;
    cout << left << setw(20) << item2 << right << setw(10) << price2 << endl;
    cout << left << setw(20) << item3 << right << setw(10) << price3 << endl;
    cout << "----------------------------------------------" << endl;
    cout << left << setw(20) << "Total Amount" << right << setw(10) << total << endl;
    cout << left << setw(20) << "Discount (10%)" << right << setw(10) << discount << endl;
    cout << left << setw(20) << "Final Payable" << right << setw(10) << finalAmount << endl;
    cout << "==============================================" << endl;
    cout << "        Thank You! Visit Again!               " << endl;
    cout << "==============================================" << endl;

    return 0;
}