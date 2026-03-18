#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x > 0 && x < 10) {
        if (x % 2 == 0) {
            cout << "Bir xonali juft son";
        } else {
            cout << "Bir xonali toq son";
        }
    } else if (x > 9 && x < 100) {
        if (x % 2 == 0) {
            cout << "Ikki xonali juft son";
        } else {
            cout << "Ikki xonali toq son";
        }
    } else {
        if (x % 2 == 0) {
            cout << "Uch xonali juft son";
        } else {
            cout << "Uch xonali toq son";
        }
    }
    return 0;
}
