#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (abs(a - b) <= abs(a - c)) {
        cout << b << " " << abs(a - b);
    } else {
        cout << c << " " << abs(a - c);
    }
    return 0;
}
