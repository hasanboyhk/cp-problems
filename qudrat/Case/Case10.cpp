#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int k;
    char y;
    cin >> y >> k;
    switch (y) {
        case 's':
            switch (k) {
                case 0:
                    cout << "s";
                    break;
                case 1:
                    cout << "g";
                    break;
                case 2:
                    cout << "q";
                    break;
            }
            break;
        case 'j':
            switch (k) {
                case 0:
                    cout << "j";
                    break;
                case 1:
                    cout << "q";
                    break;
                case 2:
                    cout << "g";
                    break;
            }
            break;
        case 'q':
            switch (k) {
                case 0:
                    cout << "q";
                    break;
                case 1:
                    cout << "s";
                    break;
                case 2:
                    cout << "j";
                    break;
            }
            break;
        case 'g':
            switch (k) {
                case 0:
                    cout << "g";
                    break;
                case 1:
                    cout << "j";
                    break;
                case 2:
                    cout << "s";
                    break;
            }
            break;
    }
    return 0;
}
