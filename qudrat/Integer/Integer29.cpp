#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, s;
    cin >> a >> b >> c;
    s = (a / c) * (b / c) * (c * c);
    cout << s << " " << a * b - s;
    return 0;
}
