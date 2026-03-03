#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, add;
    cin >> a >> b;
    if (a == b) {
        a = 0;
        b = 0;
    } else {
        add = a + b;
        a = add;
        b = add;
    }
    cout << a << " " << b;
    return 0;
}
