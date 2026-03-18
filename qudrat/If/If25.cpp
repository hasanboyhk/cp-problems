#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    if (x < -2 || x > 2) {
        cout << 2 * x;
    } else {
        cout << -3 * x;
    }
    return 0;
}
