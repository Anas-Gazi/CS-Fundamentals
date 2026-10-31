#include <iostream>
using namespace std;

class COMPLEX
{
    int real, imag;

public:
    COMPLEX(int r, int i)
    {
        real = r;
        imag = i;
    }

    COMPLEX addComplex(COMPLEX c)
    {
        COMPLEX temp(0, 0);

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    COMPLEX c1(2, 3);
    COMPLEX c2(4, 5);

    COMPLEX c3 = c1.addComplex(c2);

    cout << "First Complex: ";
    c1.display();

    cout << "Second Complex: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    return 0;
}