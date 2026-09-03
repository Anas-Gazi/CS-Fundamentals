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


    //reverse(v.begin(), v.end());

    //sort(v.rbegin(), v.rend()); // reverse 
    //sort(v.begin(), v.end(), greater<int>()); // large to small

    auto mn= min_element(v.begin(), v.end());
    for(auto value : v){
      cout << value << " ";
    }
     return 0;
}
