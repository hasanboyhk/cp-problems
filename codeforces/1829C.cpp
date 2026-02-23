#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, tmp, max1 = 1e9, max2 = 1e9, max3 = 1e9, result;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp >> s;
        if(s == "01" && tmp < max1){
            max1 = tmp;
        }else if(s == "10" && tmp < max2){
            max2 = tmp;
        }else if(s == "11" && tmp < max3){
            max3 = tmp;
        }
    }
    result = (max3 < max1 + max2 ? max3 : max1 + max2);
    cout << (result == 1e9 ? -1 : result) << "\n";
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
