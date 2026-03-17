#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        a *= 2;
        b *= 2;
        c *= 2;
    } else {
        a *= -1;
        b *= -1;
        c *= -1;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
