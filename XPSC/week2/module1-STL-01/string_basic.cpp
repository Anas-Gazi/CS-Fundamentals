#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    string s;

    for(int i =0; i<n; i++){
      char c;
      cin >> c;
      s.push_back(c);
    }

    s.pop_back();
    cout << s << endl;

    cout << s.front() << " " << s.back()<< endl;
    s.clear();
    cout << s.empty();

     return 0;
}