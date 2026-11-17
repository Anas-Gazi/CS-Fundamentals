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
        long long a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            long long z = a * b * 2;
            long long x = a;
            long long y = z - x;
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}