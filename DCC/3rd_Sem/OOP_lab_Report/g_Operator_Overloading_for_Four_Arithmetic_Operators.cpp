#include <iostream>
using namespace std;

class FLOAT
{
    float x;

public:
    void setData(float a)
    {
        x = a;
    }

    FLOAT operator+(FLOAT f)
    {
        FLOAT temp;
        temp.x = x + f.x;
        return temp;
    }

    FLOAT operator-(FLOAT f)
    {
        FLOAT temp;
        temp.x = x - f.x;
        return temp;
    }

    FLOAT operator*(FLOAT f)
    {
        FLOAT temp;
        temp.x = x * f.x;
        return temp;
    }

    FLOAT operator/(FLOAT f)
    {
        FLOAT temp;
        temp.x = x / f.x;
        return temp;
    }

    void display()
    {
        cout << x << endl;
    }

    float getValue()
    {
        return x;
    }
};

int main()
{
    FLOAT f1, f2, f3;

    f1.setData(20);
    f2.setData(10);

    f3 = f1 + f2;
    cout << "Addition = ";
    f3.display();

    f3 = f1 - f2;
    cout << "Subtraction = ";
    f3.display();

    f3 = f1 * f2;
    cout << "Multiplication = ";
    f3.display();

    if (f2.getValue() != 0)
    {
        f3 = f1 / f2;
        cout << "Division = ";
        f3.display();
    }
    else
    {
        cout << "Division is not possible.";
    }

    return 0;
}