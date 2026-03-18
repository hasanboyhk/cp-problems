#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x > 0) {
        if (x % 2 == 0) {
            cout << "Musbat juft son";
        } else {
            cout << "Musbat toq son";
        }
    } else if (x < 0) {
        if (x % 2 == 0) {
            cout << "Manfiy juft son";
        } else {
            cout << "Manfiy toq son";
        }
    } else {
        cout << "Son nolga teng";
    }
    return 0;
}
