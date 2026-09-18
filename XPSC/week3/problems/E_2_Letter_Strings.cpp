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

    map<string, int> frq;
    long long ans = 0;

    while (n--)
    {
      string s;
      cin >> s;

      for (char c = 'a'; c <= 'k'; c++)
      {
        if (c != s[0])
        {
          string x = s;
          x[0] = c;
          ans += frq[x];
        }
      }

      for (char c = 'a'; c <= 'k'; c++)
      {
        if (c != s[1])
        {
          string x = s;
          x[1] = c;
          ans += frq[x];
        }
      }

      frq[s]++;
    }

    cout << ans << "\n";
  }

  return 0;
}