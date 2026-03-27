#include <iostream>
using namespace std;

class Hotel {
    int table_no;
    string name;
    string contact;
    float order_amount;

public:
    void getData() {
        cout << "Enter Table No: ";
        cin >> table_no;
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Contact: ";
        cin >> contact;
        cout << "Enter Order Amount: ";
        cin >> order_amount;
    }

    void calculateBill() {
        float discount = 0;

        if (order_amount > 1000)
            discount = order_amount * 0.1;
        else if (order_amount > 500)
            discount = order_amount * 0.05;

        float final_bill = order_amount - discount;

        cout << "\n--- BILL ---\n";
        cout << "Customer: " << name << endl;
        cout << "Table No: " << table_no << endl;
        cout << "Amount: " << order_amount << endl;
        cout << "Discount: " << discount << endl;
        cout << "Final Bill: " << final_bill << endl;
    }
};

int main() {
    Hotel h;
    h.getData();
    h.calculateBill();
    return 0;
}