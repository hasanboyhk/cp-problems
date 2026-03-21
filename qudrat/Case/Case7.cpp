#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    double d;
    cin >> n >> d;
    switch (n) {
        case 1:
            cout << d;
            break;
        case 2:
            cout << d / 1000;
            break;
        case 3:
            cout << d / 1000000;
            break;
        case 4:
            cout << d * 1000;
            break;
        case 5:
            cout << d * 100;
            break;
    }
    return 0;
}
