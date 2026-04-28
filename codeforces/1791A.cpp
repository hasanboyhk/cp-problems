#include <bits/stdc++.h>
using namespace std;

void solve() {
    char c;
    cin >> c;
    switch (c) {
        case 'c':
        case 'o':
        case 'd':
        case 'e':
        case 'f':
        case 'r':
        case 's':
            cout << "YES\n";
            break;
        default:
            cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}