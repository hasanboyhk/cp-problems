#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool bb = b > a && a < c;
    cout << bb;
    return 0;
}
