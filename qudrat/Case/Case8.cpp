#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int m, d;
    cin >> d >> m;
    switch (m) {
        case 1:
            cout << d << "-kun";
            break;
        case 2:
            cout << 31 + d << "-kun";
            break;
        case 3:
            cout << 59 + d << "-kun";
            break;
        case 4:
            cout << 90 + d << "-kun";
            break;
        case 5:
            cout << 120 + d << "-kun";
            break;
        case 6:
            cout << 151 + d << "-kun";
            break;
        case 7:
            cout << 181 + d << "-kun";
            break;
        case 8:
            cout << 212 + d << "-kun";
            break;
        case 9:
            cout << 243 + d << "-kun";
            break;
        case 10:
            cout << 273 + d << "-kun";
            break;
        case 11:
            cout << 304 + d << "-kun";
            break;
        case 12:
            cout << 334 + d << "-kun";
            break;
    }
    return 0;
}
