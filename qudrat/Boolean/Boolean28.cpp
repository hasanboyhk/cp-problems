#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    bool b1 = x < 0 && y > 0;
    bool b3 = x < 0 && y < 0;
    bool result = b1 || b3;
    cout << result;

    return 0;
}
