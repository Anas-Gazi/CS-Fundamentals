#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 != 0)
      {
        oddCount++;
      }
      else
      {
        evenCount++;
      }
    }
    if (evenCount == oddCount)
      cout << evenCount + oddCount << endl;
    else if (evenCount < oddCount)
      cout << evenCount * 2 + 1 << endl;
    else if (oddCount < evenCount)
      cout << oddCount * 2 + 1 << endl;
  }
}


// problem link- https://www.codechef.com/problems/ODDEVEN7