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
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    map<int, int> mp;
    int ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      if (mp[a[i]] == 1)
      {
        ans = i + 1;
        break;
      }
      mp[a[i]] = 1;
    }

    cout << ans << endl;
  }

  return 0;
}