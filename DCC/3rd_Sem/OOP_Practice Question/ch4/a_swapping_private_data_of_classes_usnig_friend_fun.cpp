#include <bits/stdc++.h>
using namespace std;

class b;

class a
{
    int x;

public:
    void assign(int t)
    {
        x = t;
    }
    void display()
    {
        cout << "void of x is: " << x << endl;
    }
    friend void swap(a &, b &);
};
class b
{
    int y;

public:
    void assign(int w)
    {
        y = w;
    }
    void display()
    {
        cout << "void of y is: " << y << endl;
    }
    friend void swap(a &, b &);
};

void swap(a &c, b &d)
{
    int tmp;
    tmp = c.x;
    c.x = d.y;
    d.y = tmp;
}

int main()
{

    a n;
    b m;
    int a, b;
    cout << "Enter x: ";
    cin >> a;
    cout << "Enter y: ";
    cin >> b;
    n.assign(a);
    m.assign(b);
    swap(n, m);
    n.display();
    m.display();
    return 0;
}
// This code demonstrates the use of friend functions to swap private data members of two different classes, `a` and `b`. Each class has a private integer member (`x` for class `a` and `y` for class `b`) and public methods to assign values and display them. The `swap` function is declared as a friend of both classes, allowing it to access their private members. In the `main` function, the user is prompted to enter values for `x` and `y`, which are then swapped using the `swap` function, and the results are displayed.