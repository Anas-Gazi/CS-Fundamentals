#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
      int n,a,b,c; cin >>n >> a >> b >>c;
      int mn= min(a,min(b,c));
      cout << n- mn << endl;
      
    }
    
     return 0;
}