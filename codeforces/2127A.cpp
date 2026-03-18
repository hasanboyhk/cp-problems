#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, tmp, cnt = 0;
    cin >> n;
    unordered_set<int> arr;
    bool bor = false;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr.insert(tmp);
        if (tmp == -1) cnt++;
        if (tmp == 0) bor = true;
    }
    if (bor) {
        cout << "no\n";
        return;
    }
    if (!cnt) {
        cout << (arr.size() == 1 ? "yes\n" : "no\n");
    } else {
        cout << (arr.size() - 1 <= 1 ? "yes\n" : "no\n");
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
