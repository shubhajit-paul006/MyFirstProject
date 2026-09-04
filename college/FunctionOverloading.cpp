#include <iostream>
using namespace std;

double volume(int s)
{
    return s * s * s;
}

double volume(int r, int h)
{
    return 3.14 * r * r * h;
}

double volume(double r)
{
    return (4.0 / 3.0) * 3.14 * r * r * r;
}

int main()
{
    int side, radius, height;
    double radius_sphere;

    cout << "Enter the side of the cube: ";
    cin >> side;
    cout << "Volume of cube: " << volume(side) << endl;

    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "Volume of cylinder: " << volume(radius, height) << endl;

    cout << "Enter the radius of the sphere: ";
    cin >> radius_sphere;
    cout << "Volume of sphere: " << volume(radius_sphere) << endl;

    return 0;
}