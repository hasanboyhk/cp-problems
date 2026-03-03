#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    if (a > 0) {
        cnt++;
    }
    if (b > 0) {
        cnt++;
    }
    if (c > 0) {
        cnt++;
    }
    cout << cnt;
    return 0;
}
