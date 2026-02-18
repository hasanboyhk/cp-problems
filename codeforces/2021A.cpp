#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cnt = floor((arr[0] + arr[1]) * 1.0 / 2);
    for (int i = 2; i < n; i++) {
        cnt = floor((arr[i] + cnt) * 1.0 / 2);
    }
    cout << cnt << endl;
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
