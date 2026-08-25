#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char ch = 'a'; ch <= 'z'; ch++) {
        bool found = false;
        for (char c : s) {
            if (c == ch) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << ch;
            return 0;
        }
    }
    cout << "None";
}