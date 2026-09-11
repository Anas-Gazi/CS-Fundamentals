#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(auto value : s){
        cout << value << " ";
    }

    int a;
    cin >> a;
    cout << endl;

    auto it = s.lower_bound(a);
    if (it == s.end()) {
        cout << "END\n";
    } else {
        cout << *it << '\n';
    }

    return 0;
}