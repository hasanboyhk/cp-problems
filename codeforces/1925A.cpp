#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s = "";
    for (int j = 0; j < n; j++) {
        for (int i = 97; i < 97 + k; i++) {
            char c = i;
            s.push_back(c);
        }
    }
    cout << s << "\n";
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
