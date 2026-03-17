#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, ab, bc, ac;
    cin >> a >> b >> c;
    ab = a + b;
    bc = b + c;
    ac = a + c;
    if (ab >= bc && ab >= ac) {
        cout << a << " " << b;
    } else if (bc >= ab && bc >= ac) {
        cout << b << " " << c;
    } else {
        cout << a << " " << c;
    }
    return 0;
}
