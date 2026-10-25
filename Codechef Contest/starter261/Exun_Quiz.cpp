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
    int n, s;
    cin >> n >> s;

    if (s == 0)
      cout << 0 << endl;
    else
    {
      int a = (s + 3) / 4;
      int b = 4 * a - s;
      if (a + b <= n)
        cout << a + b << endl;
      else
        cout << -1 << endl;
    }
  }
  return 0;
}