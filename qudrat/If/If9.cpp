#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    if (a >= b) {
        a = b - 1;
    }
    cout << a << " " << b;
    return 0;
}
