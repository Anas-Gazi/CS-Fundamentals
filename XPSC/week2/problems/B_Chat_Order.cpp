#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<string> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  map<string, int> mp;
  vector<string> ans;

  for (int i = n - 1; i >= 0; i--)
  {
    if (mp.find(v[i]) == mp.end())
    {
      ans.push_back(v[i]);
      mp[v[i]] = 1;
    }
  }
  for (auto x : ans)
    cout << x << endl;

  return 0;
}
