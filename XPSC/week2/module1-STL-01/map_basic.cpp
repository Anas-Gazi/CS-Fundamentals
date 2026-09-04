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

    //cout << mp[10] << endl; // Output: 15

    // for(auto [key,value] : mp){
    //   cout << key << " " << value << endl;
    // }

    for(auto it : mp){
      int key = it.first, value = it.second;
        cout << key << "--> " << value << endl;
      
    }

    auto it = mp.find(2);
    if(it == mp.end()){
      cout << "Key not found" << endl;
    }else{
      cout << it->first << " " << it->second << endl;
    }

     return 0;
}