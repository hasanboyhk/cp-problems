#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool bb = (a == b && b != c) || (a != b && b == c) || (a == c && c != b);
    cout << bb;
    return 0;
}
