#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; while(t--){
      int n,k;
      cin >> n >> k;
      int sum =0;
      vector<int>v(n);
      for(int i=0; i<n; i++){
        cin >> v[i];

      }

      sort(v.begin(), v.end(), greater<int>());
      for(int i=0; i<=min(k, n-1); i++){
        sum+=v[i];
    }
    cout << sum << endl;
}
 return 0;
}