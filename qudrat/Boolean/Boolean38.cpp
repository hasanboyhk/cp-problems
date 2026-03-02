#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool color = (x1 + y1) % 2 == (x2 + y2) % 2;
    bool same = x1 + y1 == x2 + y2;
    bool sub = x1 - x2 == y1 - y2;
    cout << color && (same || sub);
    return 0;
}
