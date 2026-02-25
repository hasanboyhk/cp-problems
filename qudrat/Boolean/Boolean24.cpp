#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    bool bb = d > -1;
    cout << bb;
    return 0;
}
