#include <iostream>
using namespace std;

class Outer
{
public:
    int outerData;

    // Nested class definition
    class Inner
    {
    public:
        void display()
        {
            cout << "This is the Inner class." << endl;
        }
    };

    void showOuter()
    {
        cout << "This is the Outer class." << endl;
    }
};

int main()
{
    // Creating object of nested class
    Outer::Inner innerObj;
    innerObj.display();

    // Creating object of outer class
    Outer outerObj;
    outerObj.showOuter();

    return 0;
}