#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool bb = (x1 == x2) || (y1 == y2);
    cout << bb;
    return 0;
}
