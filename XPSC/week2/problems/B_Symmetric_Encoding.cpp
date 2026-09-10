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
    string b;
    cin >>b;
    vector<char> v;
    for (char c :b)
    {
      if (find(v.begin(),v.end(), c) ==v.end())
      {
        v.push_back(c);
      }
    }
    sort(v.begin(), v.end());
    for (char c : b)
    {
      int pos = find(v.begin(), v.end(), c) - v.begin();
      cout << v[v.size() - 1 - pos];
    }
    cout << endl;
  }
  return 0;
}