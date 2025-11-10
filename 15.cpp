#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() = 0;
};
class Circle : public Shape {
private:
    float radius;

public:
    void input() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() {
        float result = 3.14 * radius * radius;
        cout << "Area of Circle: " << result << endl;
    }
};
class Rectangle : public Shape {
private:
    float length, width;

public:
    void input() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    void area() {
        float result = length * width;
        cout << "Area of Rectangle: " << result << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    cout << "Circle " << endl;
    c.input();
    c.area();
    cout << "\nRectangle " << endl;
    r.input();
    r.area();
    return 0;
}
