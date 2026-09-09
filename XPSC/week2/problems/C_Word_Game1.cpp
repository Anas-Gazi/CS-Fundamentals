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
      string s;
      map<string, vector<int>>mp;
      for(int i=1; i<=3; i++){
        for(int j=1; j<= n; j++){
          cin >> s;
          mp[s].push_back(i);
        }
      }

      vector<int> ans(3+1);
      for(auto [x,y] : mp){
        if(y.size() == 1){
          ans[y[0]] +=3;
        }
        if(y.size() ==2){
          ans[y[0]]++;
          ans[y[1]]++;
        }
      }

      for(int i=1; i<=3; i++){
        cout << ans[i] << " ";
      }
      cout << endl;
    }
    
     return 0;
}