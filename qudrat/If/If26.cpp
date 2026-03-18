#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    if (x <= 0) {
        cout << -1 * x;
    } else if (x == 1) {
        cout << x * x;
    } else {
        cout << 4;
    }
    return 0;
}
