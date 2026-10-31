#include <iostream>
using namespace std;

class Vector
{
    int a, b, c;

public:
    void create(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void add(Vector v1, Vector v2)
    {
        a = v1.a + v2.a;
        b = v1.b + v2.b;
        c = v1.c + v2.c;
    }

    void display()
    {
        cout << "(" << a << "i + "
             << b << "j + " << c << "k)";
    }
};

int main()
{
    Vector v1, v2, v3;

    v1.create(2, 3, 4);
    v2.create(1, 2, 3);

    v3.add(v1, v2);

    cout << "First Vector: ";
    v1.display();

    cout << "\nSecond Vector: ";
    v2.display();

    cout << "\nResultant Vector: ";
    v3.display();

    return 0;
}