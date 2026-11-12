#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, tmp, laten;
    map<int, int> mappy;
    cin >> n;
    laten = n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mappy[tmp]++;
    }
    for (auto pair : mappy) {
        if (pair.second > 2) {
            n -= pair.second - 2;
        }
    }
    cout << n << "\n";
    // int arr[n];
    vector<int> arr(laten);
    int count = 0, cntb = 1;
    for (auto pair : mappy) {
        arr[count] = pair.first;
        if (pair.second > 1) {
            for (int j = 0; j < pair.second - 1; j++) {
                arr[laten - cntb] = pair.first;
                cntb++;
            }
        }
        count++;
    }
    for (int i = 0; i < laten; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}