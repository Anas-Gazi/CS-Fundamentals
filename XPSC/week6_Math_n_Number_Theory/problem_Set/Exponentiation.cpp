#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        long long a, b;
        cin >> a >> b;

        long long result = 1;

        while (b > 0)
        {
            if (b % 2 == 1)
            {
                result = (result * a) % MOD;
            }

            a = (a * a) % MOD;
            b /= 2;
        }

        cout << result << endl;
    }

    return 0;
}