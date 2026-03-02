#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool bb = (a + b > c) && (b + c > a) && (a + c + b);
    cout << bb;
    return 0;
}
