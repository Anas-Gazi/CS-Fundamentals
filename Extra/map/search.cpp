#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  map<string, int> mp;

  int n;
  cin >> n;
  string name;

  for (int i = 0; i < n; i++)
  {
    cin >> name;
    mp[name];


  }
    if(mp.count("Anas") == 1){
      cout << "found"<< endl;
    }else{
      cout << "Not Found" << endl;
    }

  return 0;
}

