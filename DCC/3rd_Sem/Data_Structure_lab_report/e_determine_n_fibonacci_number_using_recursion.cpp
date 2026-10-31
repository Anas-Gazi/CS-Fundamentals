#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    // return fibonacci(n - 1) + fibonacci(n - 2);
    int fiba = fibonacci(n - 2);
    int fibb = fibonacci(n - 1);
    int fib = fiba + fibb;
    return fib;
}

int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    cout << "nth fibonacci number = " << fibonacci(n);
    return 0;
}