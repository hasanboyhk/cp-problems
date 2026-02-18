#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c == '1') {
            bool b = true;
            int cal = (i - k < 0 ? 0 : i - k + 1);
            for (int j = cal; j < i; j++) {
                if (s[j] == '1') {
                    b = false;
                    cal = i;
                }
            }
            if (b) cnt++;
        }
    }
    cout << cnt << "\n";
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
