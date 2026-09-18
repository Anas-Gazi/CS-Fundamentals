#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, customerNo = 1;
  cin >> n;

  set<pair<int, int>> s;
  multiset<pair<int, int>> ml;
  vector<int> ans;

  while (n--)
  {
    int type;
    cin >> type;

    if (type == 1)
    {
      int money;
      cin >> money;
      s.insert({customerNo, money});
      ml.insert({money, -customerNo});
      customerNo++;
    }
    else if (type == 2)
    {
      auto it = s.begin();
      int pos = it->first;
      int money = it->second;
      ans.push_back(pos);
      s.erase(it);
      ml.erase(ml.find({money, -pos}));
    }
    else
    {
      auto it = prev(ml.end());
      int money = it->first;
      int pos = -it->second;
      ans.push_back(pos);
      ml.erase(it);
      s.erase({pos, money});
    }
  }

  for (int x : ans)
    cout << x << " ";
  cout << endl;

  return 0;
}