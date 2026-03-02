#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    bool bb = (x + y) % 2 == 1;
    cout << bb;
    return 0;
}