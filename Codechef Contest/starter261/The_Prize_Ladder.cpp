#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = 1, b = 2000000, ans = 1;
        while (a <= b)
        {
            long long k = (a + b) / 2;
            if (k * k * k + 5 * k <= 6 * n)
            {
                ans = k;
                a = k + 1;
            }
            else
            {
                b = k - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
