#include <iostream>
using namespace std;

double get_radius();
double area_circle(double);

int main()
{
    double radius = get_radius();
    double area_of_circle = area_circle(radius);

    cout << "area of circle " << area_of_circle << endl;

    return 0;
}
double get_radius()
{
    cout << "enter radius" << endl;
    double r;
    cin >> r;
    return r;
}
double area_circle(double r)
{
    double area = 3.14 * r * r;
    return area;
}