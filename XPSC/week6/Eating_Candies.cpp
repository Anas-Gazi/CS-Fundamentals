#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int>v(n);

      int cnt =0;
      for(int i=0; i<n; i++){
        cin >> v[i];
      }
     int posl = v[0];
     int posr =v[n-1];
     while(posl != posr){
      posl++;
      posr --;
      cnt ++;
     }
     cout << cnt << endl;
    }
    
     return 0;
}