#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> s(n);

  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++)
  {
    bool same = false;
    for (int j = 0; j < i; j++)
    {
      if (s[i] == s[j])
      {
        same = true;
        break;
      }
    }
    if (same == false)
      cout << "NO" << endl;
    else if (same == true)
      cout << "YES" << endl;
  }

  return 0;
}