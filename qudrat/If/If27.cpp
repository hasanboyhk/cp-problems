#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    int k = floor(x);
    if (x < 0) {
        cout << 0;
    } else if (k % 2 == 0) {
        cout << 1;
    } else {
        cout << -1;
    }
    return 0;
}
