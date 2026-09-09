#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >>m;
    int ans =0;
    for(int i=1; i<=n; i++ ){
      //for(int j=1; j<=m; j++){
        if(m>n){
           ans= m-n;
      //  }
       if (ans % i ==0){
        cout << i;
       }
      }
      
    }
     cout << ans;
     return 0;
}