#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;

    long long sum1 = 0;
    long long sum2 = 0;
    long long ans = 0;

    while(l <= r)
    {
        if(sum1 <= sum2)
        {
            sum1 += a[l];
            l++;
        }
        else
        {
            sum2 += a[r];
            r--;
        }

        if(sum1 == sum2)
            ans = sum1;
    }

    cout << ans << '\n';

    return 0;
}