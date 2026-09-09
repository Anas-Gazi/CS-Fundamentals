#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      int r, b, g;
      cin >> r>> b>> g;

      int mn = min(r, min(b,g));
      int r1= r-mn;
      int b1= b-mn;
      int g1= g-mn;
      cout << mn*10 + r1*3+b1*3+g1*3; 

     
      cout << endl;
    }
    
     return 0;
}