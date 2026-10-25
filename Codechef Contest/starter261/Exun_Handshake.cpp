
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    long long m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a.begin(), a.end());

    long long ppl = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      long long total = ppl + a[i];
      long long handshake = total * (total - 1) / 2;

      if (handshake > m)
      {
        break;
      }
      ppl = total;
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}
