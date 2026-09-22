#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
      long long int a,b,c;
      cin >> a >> b >>c;
      long long int x= abs(a-b);
      long long int y= abs(a+c-b);
      cout << max(x,  y)<< endl;
    }
    
     return 0;
}