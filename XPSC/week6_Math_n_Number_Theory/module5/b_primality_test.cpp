#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    cout << isPrime(n);

    return 0;
}

// this code is for checking whether a number is prime or not. It defines a function `isPrime` that takes an integer `n` as input and returns `true` if `n` is prime and `false` otherwise. The main function reads an integer from the input, calls the `isPrime` function, and prints the result.
// input: 7
// output: 1 (true, since 7 is a prime number)
// input: 10
// output: 0 (false, since 10 is not a prime number)