#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    double area;
    Shape(double base, double height) {
        area = 0.5 * base * height;
    }
    Shape(double base, double height,int x) {
        area = base * height * x;
    }
    Shape(double radius) {
        area = 3.14159 * pow(radius, 2);
    }
};
int main() {
    double base, height, radius;
    cout << "Enter Base, Height, and Radius: ";
    cin >> base >> height >> radius;
    Shape triangle(base, height);
    Shape rectangle(base, height, 1);
    Shape circle(radius);
    cout << "Area of a triangle is " << triangle.area << endl;
    cout << "Area of Rectangle is " << rectangle.area << endl;
    cout << "Area of a circle is " << circle.area << endl;
    return 0;
}
