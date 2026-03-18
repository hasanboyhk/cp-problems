#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (y1 == y2) {
        cout << x1 << " " << y3;
    } else {
        cout << y1 << " " << x3;
    }
    return 0;
}
