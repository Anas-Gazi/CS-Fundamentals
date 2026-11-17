#include <bits/stdc++.h>
using namespace std;

const float pi = 3.14;

float area(float n, float a, float b)
{
    float ar = n * a * b;
    return ar;
}

float area(float r)
{
    float ar = pi * r * r;
    return ar;
}
float area(float a, float b)
{
    float ar = a * b;
    return ar;
}

int main()
{
    float a, b, r;
    float result;

    cout << "Enter length(a), width(b), radius(r): ";
    cin >> a >> b >> r;

    cout << "Area of Trangel = " << area(0.5, a, b) << endl;
    cout << "Area of Circle = " << area(r) << endl;
    cout << "Area of Rectangle = " << area(a, b) << endl;
}
// this code calculates the area of different shapes (triangle, circle, and rectangle) using function overloading. It defines three overloaded functions named `area`, each taking different parameters to calculate the area of a triangle, circle, and rectangle respectively. The user is prompted to enter the length, width, and radius, and the program outputs the calculated areas for each shape.