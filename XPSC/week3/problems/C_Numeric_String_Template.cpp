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

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int m;
    cin >> m;

    while (m--)
    {
      string s;
      cin >> s;

      if ((int)s.size() != n)
      {
        cout << "NO" << endl;
        continue;
      }

      map<long long, char> num;
      map<char, long long> ch;
      bool ok = true;

      for (int i = 0; i < n; i++)
      {
        if (num.count(a[i]))
        {
          if (num[a[i]] != s[i])
          {
            ok = false;
            break;
          }
        }
        else
        {
          num[a[i]] = s[i];
        }

        if (ch.count(s[i]))
        {
          if (ch[s[i]] != a[i])
          {
            ok = false;
            break;
          }
        }
        else
        {
          ch[s[i]] = a[i];
        }
      }

      cout << (ok ? "YES" : "NO") << endl;
    }
  }

  return 0;
}