#include <bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if (n == 0)
        return 1;

    // int fact = Factorial(n - 1);
    // fact = n * fact;
    // return fact;

    return n * Factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "factorial = " << Factorial(n) << endl;
    return 0;
}