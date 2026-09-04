#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 5;
  // cin >> n;
  deque<int> dq;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    dq.push_back(x);
  }

  for (auto value : dq)
  {
    cout << value << " ";
  }
  cout << endl;

  dq.pop_front();
  dq.pop_back();

  for (auto value : dq)
  {
    cout << value << " ";
  }
  cout << endl;

  // push_back(), pop_back(), back(); insert, delete, value
  // push_front(), pop_front(), front(); insert, delete, value

  return 0;
}