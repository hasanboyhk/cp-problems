#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool bb = abs(x1 - x2) < 2 && (y1 - y2) < 2;
    cout << bb;
    return 0;
}
