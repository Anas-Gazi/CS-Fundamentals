#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(auto value : s){
        cout << value << " ";
    }
cout << endl;
    // s.erase(6);
    // for(auto value : s){
    //     cout << value << " ";
    // }
    // cout << endl;

    auto it = s.find(5);
    s.erase(it);
        for(auto value : s){
        cout << value << " ";
    }
    cout << endl;

    // int a;
    // cin >> a;
    // cout << endl;

    // auto it = s.upper_bound(a);
    // if (it == s.end()) {
    //     cout << "END\n";
    // } else {
    //     cout << *it << '\n';
    // }

    return 0;
}