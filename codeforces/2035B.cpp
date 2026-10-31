#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1 || n == 3) {
        cout << -1;
    } else if (n == 2) {
        cout << 66;
    } else {
        for (int i = 0; i < n - 4; i++) {
            cout << 3;
        }
        if (n % 2 == 0) {
            cout << 3366;
        } else {
            cout << 6366;
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}