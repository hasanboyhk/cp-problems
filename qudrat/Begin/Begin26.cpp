#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x, y;
    cin >> x;
    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
    cout << y;
    return 0;
}
