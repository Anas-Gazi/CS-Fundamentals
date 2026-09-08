#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string name;
    cin.ignore();

    map<string, int> mp;

    for(int i=1; i<=n; i++){
      getline(cin, name);
      mp[name]++;
    }

    cout << mp.size();
    
     return 0;
}

