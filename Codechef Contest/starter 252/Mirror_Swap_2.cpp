#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while (t--){
      int n; cin >> n;
      int a[2*n];
    int sum=0;
      for(int i=0; i<2*n; i++){
        cin >> a[i];
      }

      for(int i=0; i<n; i++){
        int cur= a[i];
        int mir = a[2*n+1 -i];
        sum += max(cur, mir);
      }
      cout << sum << endl;

    }

       return 0;
}