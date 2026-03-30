#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p =&a;
    cout << "value of a : " << a << endl;
    cout << "Address of a: "<< &a << endl;
    cout << "value stored in p: " << p <<endl;
    cou << " value at address p: "<< *p <<endl;
}