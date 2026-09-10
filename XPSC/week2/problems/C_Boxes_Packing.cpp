#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int ans = 1, cnt = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] == a[i - 1]) cnt++;
    else cnt = 1;
    ans = max(ans, cnt);
  }
  cout << ans << "\n";
}