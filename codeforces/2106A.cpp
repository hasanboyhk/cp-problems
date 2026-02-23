#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, t = 0, cnt = 0;
    char tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp == '1') t++;
    }
    cnt += t * (t - 1);
    cnt += (n - t) * (t + 1);
    cout << cnt << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
