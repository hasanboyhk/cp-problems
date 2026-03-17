#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << 3;
    } else if (b == c) {
        cout << 1;
    } else {
        cout << 2;
    }
    return 0;
}
