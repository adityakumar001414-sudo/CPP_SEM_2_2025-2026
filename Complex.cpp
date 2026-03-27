#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(Complex c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    friend ostream &operator<<(ostream &out, Complex c);
    friend istream &operator>>(istream &in, Complex &c);
};

ostream &operator<<(ostream &out, Complex c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream &operator>>(istream &in, Complex &c) {
    cout << "Enter real and imaginary: ";
    in >> c.real >> c.imag;
    return in;
}

int main() {
    Complex c1, c2, c3;

    cin >> c1 >> c2;

    c3 = c1 + c2;
    cout << "Addition: " << c3 << endl;

    c3 = c1 * c2;
    cout << "Multiplication: " << c3 << endl;

    return 0;
}