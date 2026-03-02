#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool color = (x1 + y1) % 2 == (x2 + y2) % 2;
    bool same = x1 + y1 == x2 + y2;
    bool sub = x1 - y1 == x2 - y2;
    bool bishop = color && (same || sub);
    bool rook = x1 == x2 || y1 == y2;
    bool man_dist = abs(x1 - x2) + abs(y1 - y2) == 3;
    cout << (!color && !bishop && !rook && man_dist);
    return 0;
}
