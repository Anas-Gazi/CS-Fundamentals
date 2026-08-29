#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while (t--){
      int n; cin >> n;
      int a[2*n+1];
    int sum=0;
      for(int i=1; i<=2*n; i++){
        cin >> a[i];
      }
      for(int i=1; i<=n; i++){
        if(a[i] < a[(2 *n+1) -i]){
          swap( a[i],a[(2 *n+1) -i] );
        }
          sum +=a[i];

      }
      cout << sum<< endl;

    }

       return 0;
}