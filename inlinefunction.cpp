#include <iostream>
using namespace std;

int addNormal(int a, int b)
{
    return a + b;
}

inline int addInline(int a, int b)
{
    return a + b;
}

inline int subtractInline(int a, int b)
{
    return a - b;
}

class Calculator
{
public:
    inline int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << endl;
    cout << "Addition using normal function: " << addNormal(num1, num2) << endl;
    cout << "Addition using inline function: " << addInline(num1, num2) << endl;
    cout << "Subtraction using inline function: " << subtractInline(num1, num2) << endl;

    Calculator calc;
    cout << "Addition using inline member function: " << calc.add(num1, num2) << endl;

    cout << "Basic Arithmetic Operations" << endl;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << (float)num1 / num2 << endl;
    else
        cout << "Division: Undefined (division by zero)" << endl;

    return 0;
}