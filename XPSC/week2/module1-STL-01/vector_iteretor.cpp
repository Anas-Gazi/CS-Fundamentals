#include <bits/stdc++.h>
using namespace std;

int main()
{  

    ios::sync_with_stdio(false); // Disable synchronization between C and C++ I/O
    cin.tie(nullptr); // Untie cin from cout to improve input performance


    int n =5;
    // cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
      int x;
      cin >> x;
      v.push_back(x); // v[i] = x;
    }

    cout << v[0] << endl;
    for(auto it = v.begin(); it!= v.end(); it++){ 
      cout << *it << " "; // *it = v[i]
    }

    cout << endl;

    auto last_element = --v.end(); // last_element = v.end() - 1;
    // last_element--;
    cout << *last_element; 

     return 0;
}
