#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    bool bx = (x > x1 && x < x2) || (x < x1 && x > x2);
    bool by = (y > y1 && y < y2) || (y < y1 && y > y2);
    bool result = bx && by;
    cout << result;
    return 0;
}
