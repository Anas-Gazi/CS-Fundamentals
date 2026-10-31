#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }

    friend void largest(A, B);
};

class B
{
    int y;

public:
    void setData(int b)
    {
        y = b;
    }

    friend void largest(A, B);
};

void largest(A a, B b)
{
    if (a.x > b.y)
        cout << "Largest = " << a.x;
    else
        cout << "Largest = " << b.y;
}

int main()
{
    A a;
    B b;

    a.setData(20);
    b.setData(30);

    largest(a, b);

    return 0;
}