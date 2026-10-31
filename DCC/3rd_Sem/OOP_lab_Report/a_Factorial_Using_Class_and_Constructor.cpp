#include <iostream>
using namespace std;

class Factorial
{
    int n, fact;

public:
    Factorial()
    {
        cout << "Enter a number: ";
        cin >> n;
        fact = 1;
    }

    void calculate()
    {
        if (n < 0)
        {
            cout << "Invalid Number";
            return;
        }

        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }

    void display()
    {
        if (n >= 0)
            cout << "Factorial = " << fact;
    }
};

int main()
{
    Factorial f;

    f.calculate();
    f.display();

    return 0;
}