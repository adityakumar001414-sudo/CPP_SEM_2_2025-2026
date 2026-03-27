#include <iostream>
using namespace std;

class Add {
public:
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Add obj;
    cout << "Sum = " << obj.sum(10, 20);
    return 0;
}