#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >>t;
    while(t--){
      int n;
    cin >> n;
   int a[n+1];
    for (int i = 1; i < n+1; i++)
    {
      cin >> a[i];
    }
    sort( a+1, a+n+1);
    int pref[n+1];
    pref[1]= a[1];
    for(int i=2; i<n; i++){
      pref[i]= pref[i-1] + a[i];
    }
    for(int i=1; i<=n; i++)


  }
     return 0;
}