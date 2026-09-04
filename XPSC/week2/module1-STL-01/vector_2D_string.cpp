#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<string> v;
    for(int i=0; i<n; i++){
      string s;
      cin >> s;
      v.push_back(s);
    }
    for(int i=0; i<n; i++){
      cout << v[i] << endl;
    }

     return 0;
}
 // this code is for reading n strings from the input, storing them in a vector of strings, and then printing each string on a new line. It uses the C++ Standard Library's vector and string classes, and it optimizes input/output operations by disabling synchronization with C-style I/O and untieing cin from cout.