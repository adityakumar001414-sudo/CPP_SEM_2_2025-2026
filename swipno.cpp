#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    float p = 5.5, q = 9.8;
    char c1 = 'A', c2 = 'Z';

    cout << "--- Swapping Integers ---" << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    cout << "\n--- Swapping Floats ---" << endl;
    cout << "Before swap: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swap: p = " << p << ", q = " << q << endl;

    cout << "\n--- Swapping Characters ---" << endl;
    cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}