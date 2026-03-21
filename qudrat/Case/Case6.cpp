#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    double d;
    cin >> n >> d;
    switch (n) {
        case 1:
            cout << d / 10;
            break;
        case 2:
            cout << d * 1000;
            break;
        case 3:
            cout << d;
        case 4:
            cout << d / 1000;
            break;
    }
    return 0;
}
