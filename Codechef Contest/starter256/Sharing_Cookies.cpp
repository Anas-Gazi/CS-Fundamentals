#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a>> b;
  int x= (a-b);
  if(x%2 ==0) cout << x/2;
  else cout << -1;

   
    
     return 0;
}