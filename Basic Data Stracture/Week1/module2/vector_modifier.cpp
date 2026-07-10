#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {1,2,3,4};
    // vector<int> v2;
    // v2 = v;

    // v.pop_back();

    v.insert(v.begin() +2, 100);

    for( int x : v){
      cout << x << " ";
    }

       return 0;
}