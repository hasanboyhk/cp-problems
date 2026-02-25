#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    bool b2 = x > 0 && y > 0;
    bool b3 = x < 0 && y < 0;
    bool result = b2 || b3;
    cout << result;
    return 0;
}
