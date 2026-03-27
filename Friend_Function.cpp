#include <iostream>
using namespace std;

class Test {
    int num;

public:
    Test(int n) {
        num = n;
    }

    friend void display(Test t);
};

void display(Test t) {
    cout << "Number: " << t.num;
}

int main() {
    Test t(50);
    display(t);
    return 0;
}