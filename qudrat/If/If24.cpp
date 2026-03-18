#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    if (x > 0) {
        cout << 2 * sin(x);
    } else {
        cout << x - 6;
    }
    return 0;
}
