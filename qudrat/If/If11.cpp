#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a != b) {
        if (a > b) {
            b = a;
        } else {
            a = b;
        }
    } else {
        a = 0;
        b = 0;
    }
    cout << a << " " << b;
    return 0;
}
