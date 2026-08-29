#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin >>n;
      string s1;
      string s2;
      cin >> s1 >> s2;
      bool found = true;
      for(int i=0; i<n; i++){
        if(s1[i] == s2[i]){
          continue;
        } else if((s1[i] =='G' && s2[i] =='B' ) || (s1[i] =='B' && s2[i] =='G' )){
          continue;
        }else{
          found = false;
        }

      }
      if ( found == true) cout << "YES" << endl;
      else cout << "NO" << endl;
    }

       return 0;
}