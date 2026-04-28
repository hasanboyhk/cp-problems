#include <iostream>
using namespace std;

void solve() {
    int n, max = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c > max) {
            max = c;
        }
    }
    cout << max - 96 << "\n";
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