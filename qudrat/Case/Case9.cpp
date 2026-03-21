#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int d, m;
    cin >> d >> m;
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            switch (d) {
                case 31:
                    cout << (m + 1) << "-oy, 1-kun";
                    break;
                default:
                    cout << m << "-oy, " << d + 1 << "-kun";
            }
            break;
        case 12:
            switch (d) {
                case 31:
                    cout << "1-oy, 1-kun";
                default:
                    cout << "12-oy, " << d + 1 << "-kun";
            }
        case 4:
        case 6:
        case 9:
        case 11:
            switch (d) {
                case 30:
                    cout << (m + 1) << "-oy, 1-kun";
                    break;
                default:
                    cout << m << "-oy, " << d + 1 << "-kun";
            }
            break;
        case 2:
            switch (d) {
                case 28:
                    cout << (m + 1) << "3-oy, 1-kun";
                    break;
                default:
                    cout << "2-oy, " << d + 1 << "-kun";
            }
            break;
    }

    return 0;
}
