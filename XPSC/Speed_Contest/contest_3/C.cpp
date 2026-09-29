#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; while(t--){
      int n,k;
      cin >> n >>k;
      string s;
      cin >> s;
      int zero=0, one= 0, mn=0;

      int pos= -1;
      for(int i=0; i<n; i++){
        if(s[i] =='1'){
          one ++;
          pos= i;
        }
      }
      for(int i=0; i<pos; i++){
          if(s[i]=='0'){
          zero++;
        }
        mn= min(k, zero);
      }
      if(pos== -1) cout << 0 << endl;
     else cout <<  one + mn << endl;
    }
    
     return 0;
}