#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 0; i < n - k; i++)
    {
      sum += v[i];
    }
    int ans = sum;
    for (int i = n - k; i != n; i++)
    {
      sum += v[i];
      sum -= v[i - (n - k)];
      ans = max(ans, sum);
    }
    cout << ans << endl;
  }
}
