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


   
    for(auto value : v){
      cout << value << " " ;
    }

    cout << endl;
     auto mn= min_element(v.begin(), v.end());
      auto mx= max_element(v.begin(), v.end());
      cout << *mn << " " << *mx << endl;

    int mxElePosition = mx- v.begin();
    cout << mxElePosition;
     return 0;
}
