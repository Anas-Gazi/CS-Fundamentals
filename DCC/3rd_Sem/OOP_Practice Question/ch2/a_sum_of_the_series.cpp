#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n, k;
    cout << "Enter the last nymber : ";
    cin >> n;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        k = pow(1.0 / i, i);
        sum += k;
    }
    cout << "The Sum of the series is " << sum << endl;
    return 0;
}
// This code calculates the sum of the series 1/1^1 + 1/2^2 + 1/3^3 + ... + 1/n^n for a given value of n. It prompts the user to enter the last number (n), then iterates from 1 to n, calculating each term of the series using the formula pow(1.0 / i, i) and adding it to the sum. Finally, it outputs the total sum of the series.