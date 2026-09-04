#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp[10] = 20;
    mp[2]= 12;
    mp[10]=15;

        for(auto it : mp){
      int key = it.first, value = it.second;
        cout << key << "--> " << value << endl;
      
    }
    cout << endl;

    auto it = mp.find(10);
    if(it != mp.end()){
      mp.erase(it);
    }
            for(auto it : mp){
      int key = it.first, value = it.second;
        cout << key << "--> " << value << endl;
      
    }

     return 0;
}