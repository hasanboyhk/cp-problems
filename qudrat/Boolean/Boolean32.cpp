#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool bb = (a * a + b * b == c * c) || (c * c + b * b == a * a) || (a * a + c * c == b * b);
    cout << bb;
    return 0;
}
