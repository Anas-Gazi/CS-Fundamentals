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
      if(n==1 || n==3) cout << 1 << endl;
     else if(n%2 ==0) cout <<(n/2)+1 << endl;
     else cout << n/2<< endl;
    }
    
     return 0;
}