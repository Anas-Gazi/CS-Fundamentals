#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << 2 << "\n";
    int current_large = n;
    for (int i = n - 1; i >= 1; --i) {
        cout << current_large << " " << i << "\n";
        current_large = (current_large + i + 1) / 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
