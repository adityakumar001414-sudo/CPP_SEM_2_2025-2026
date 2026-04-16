#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void display()
    {
        cout << "This is a virtual function in the base class." << endl;
    }

    virtual double area() = 0;
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    void display()
    {
        cout << "Rectangle class implementation." << endl;
    }

    double area()
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    void display()
    {
        cout << "Circle class implementation." << endl;
    }

    double area()
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Shape* ptr;

    Rectangle rect(10, 5);
    Circle circ(7);

    ptr = &rect;
    ptr->display();
    cout << "Area: " << ptr->area() << endl << endl;

    ptr = &circ;
    ptr->display();
    cout << "Area: " << ptr->area() << endl;

    return 0;
}