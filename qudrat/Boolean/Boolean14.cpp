#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool bb = (a > 0 && b < 1 && c < 1) ||
              (a < 1 && b > 0 && c < 1) ||
              (a < 1 && b < 1 && c > 0);
    cout << bb;
    return 0;
}
