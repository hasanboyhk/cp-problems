#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, cnt = 0, tmp, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp >= k) {
            cnt += tmp;
        } else if (tmp == 0 && cnt > 0) {
            cnt--;
            count++;
        }
    }
    cout << count << "\n";
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