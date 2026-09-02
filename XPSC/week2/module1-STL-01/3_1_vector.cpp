#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin >> v[i];
      // int x;
      // cin >>x;
      // v.push_back(x);
    }
    for(int i=0; i<v.size(); i++){
      cout << v[i] << " " ;
    }
    cout << endl;


     return 0;
}