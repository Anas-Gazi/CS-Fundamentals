#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; while(t--){
      int n, a;
      cin>> n;
       int cnt =0;
      for(int i=0; i<n;i++){
        cin >> a;
        cnt += (a-1);
      }

  cout << cnt << endl;
}
    
     return 0;
}