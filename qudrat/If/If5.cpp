#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, minus = 0, plus = 0;
    cin >> a >> b >> c;
    if (a > 0) {
        minus++;
    }
    if (b > 0) {
        minus++;
    }
    if (c > 0) {
        minus++;
    }
    if (a < 0) {
        plus++;
    }
    if (b < 0) {
        plus++;
    }
    if (c < 0) {
        plus++;
    }
    cout << "Manfiy: " << minus << "\nMusbat: " << plus;
    return 0;
}
