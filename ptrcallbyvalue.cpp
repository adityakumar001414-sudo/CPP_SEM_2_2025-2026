#include<isostream>
using namespace std;
void update(int *x)
{
    *x = 50;
}
int main ()
{
    int a = 10;
    update(&a);
    cout << a;
}