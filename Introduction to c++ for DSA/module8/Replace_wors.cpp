#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
      string s,x;
      cin >> s >>x;

      s.replace( s, x, '#');
      cout << s ;

      
    }

       return 0;
}