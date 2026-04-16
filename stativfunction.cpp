#include <iostream>
using namespace std;

class Sample
{
private:
    static int count;
    static int sharedValue;

public:
    Sample()
    {
        count++;
        sharedValue++;
    }

    void displayUsingObject()
    {
        cout << "Shared Value: " << sharedValue << endl;
        cout << "Total Objects Created: " << count << endl;
    }

    static void displayUsingStaticFunction()
    {
        cout << "Shared Value: " << sharedValue << endl;
        cout << "Total Objects Created: " << count << endl;
    }
};

int Sample::count = 0;
int Sample::sharedValue = 100;

int main()
{
    cout << "Initial Values Using Static Member Function" << endl;
    Sample::displayUsingStaticFunction();

    Sample obj1;
    Sample obj2;
    Sample obj3;

    cout << endl;
    cout << "Accessing Static Data Members Using Objects" << endl;
    obj1.displayUsingObject();
    obj2.displayUsingObject();
    obj3.displayUsingObject();

    cout << endl;
    cout << "Accessing Static Data Members Without Any Object" << endl;
    Sample::displayUsingStaticFunction();

    return 0;
}