#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
      int n; cin >>n;
      string a, b;
      cin >> a >>b;

      int count1 =0;
      int count2= 0;
      for(int i=0; i<n; i++){
        if(a[i] == 'a'){
          count1 ++;
        } else{
          count2 ++;
        }
          if(b[i] == 'a'){
          count1 ++;
        } else{
          count2 ++;
        }

      }
      if (count1 == count2) cout << "YES" << endl;
      else cout << "NO" << endl;

      
    }
    
     return 0;
}