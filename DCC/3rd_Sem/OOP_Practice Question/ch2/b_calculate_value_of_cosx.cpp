#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{

    long int i;
    float cosx = 0, x = 1;
    for (i = 1; i <= 7; i += 2)
    {
        cosx = cosx + pow(-1, i + 1) * pow(x, i) / fact(i);
    }
    cout << "cosx=" << cosx;
    return 0;
}

// this code calculate the value of cosx = 1 - x^2/2! + x^4/4! - x^6/6! + ... for a given value of x. It uses a loop to iterate through odd values of i from 1 to 7, calculating each term of the series using the formula pow(-1, i + 1) * pow(x, i) / fact(i) and adding it to the total sum cosx. Finally, it outputs the calculated value of cosx.