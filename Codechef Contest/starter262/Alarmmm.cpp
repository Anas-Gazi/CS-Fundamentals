#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int alarm = 0;
        int pos = 0;
        while (pos < n)
        {
            if (s[pos] == '1')
            {
                alarm++;
                pos += k + 1;
            }
            else
            {
                pos++;
            }
        }
        cout << alarm << endl;
    }
    return 0;
}