#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n > 1000){
            cout << n / 1000 * 10 << "\n";
        }else if(n > 100){
            cout << (n / 100 - 1) * 10 + 6 << "\n";
        }else if(n > 10){
            cout << (n / 10 - 1) * 10 + 3 << "\n"; 
        }else{
            cout << (n - 1) * 10 + 1 << "\n";
        }
    }
}
