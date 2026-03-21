#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a, b;
    int n;
    cin >> a >> b >> n;
    switch (n) {
        case 1:
            cout << a + b;
            break;
        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a / b;
            break;
        case 4:
            cout << a * b;
            break;
    }
    return 0;
}
