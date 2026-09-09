#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  map<string, int> mp;

  int n;
  cin >> n;
  string name;
  int highest= 0;
  for (int i = 0; i < n; i++)
  {
    cin >> name;
    mp[name]++;
    highest = max( highest, mp[name]);
  }

  for (auto x : mp)
  {
    if(x. second == highest){
      cout << x.first<< endl;
    }
  }
  return 0;
}

// problem link:  https://atcoder.jp/contests/abc155/tasks/abc155_c