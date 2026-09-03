#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >>n;
    // vector<int> v(n,5);
    // for(int i=0; i<n; i++){
    //   cout << v[i] << " " ;
    // }

    vector<int>v;
    v.assign(n, 9);
    for(int i=0; i<n; i++){
      cout << v[i] << " ";
    }

     return 0;
}