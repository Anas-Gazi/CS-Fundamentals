#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t; while(t--){
      int n, k;
      cin >> n >>k;
      string s;
      cin >> s;
      int cnt =0, l=0,ans =0;
      for(int r=0; r<n; r++){
        if(s[r] =='W') cnt ++;

        if(r-l+1 ==k){
          if(l==0) ans = cnt;
          else ans= min(cnt, ans);
          if (s[l] == 'W') cnt--;
          l++;
        }
      }
      cout << ans << endl;
      
    }
    
     return 0;
}