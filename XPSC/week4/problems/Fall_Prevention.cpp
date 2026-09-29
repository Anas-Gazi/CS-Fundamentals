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
    int arr[n];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {

      if (arr[1] <= 0)
      {
        cnt =0;
   
      }
      else
      {
        cnt += arr[i];
      }
    }
    if (cnt >= 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}