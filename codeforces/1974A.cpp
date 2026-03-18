#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, cnt = 0, add;
    cin >> x >> y;
    cnt += (y % 2 == 0 ? y / 2 : y / 2 + 1);
    add = (y % 2 == 0 ? 0 : 4);
    cnt += (cnt * 7 + add >= x ? 0 : (int)ceil((x - cnt * 7 - add) / 15.0));
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
