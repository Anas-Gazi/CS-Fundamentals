#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;while(t--){
      int n,m,k,x;
      cin >> n>> m>>k;
      set<int> s;
      for(int i=1; i<=m; i++){
        cin >> x;
        s.insert(x);
      }
      for(int i=1; i<=k; i++){
        for(int j=1; j<=n; j++){
          if(s.find(j) == s.end()){
            cout << j << " ";
            s.insert(j);
            break;
          }
        }
        
      }
      cout << endl;
    }
    
     return 0;
}