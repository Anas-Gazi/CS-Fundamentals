#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int , string>mp;
    mp[0] = "Anas Khan";
    mp[1]= "Gazi";
    mp[2] = "Ami Anas";
    mp[0] = "Change";

    //mp.erase(0); // erase data 

    //cout << mp.count(0); // search specific key
    // for(auto x : mp){
    //   cout << x.first << " " << x.second << endl;
    // }
    cout << mp[0] << endl;
    cout << mp.size();
    
     return 0;
}