#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    if (s[0] == 'B') cnt++;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) cnt++;
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}