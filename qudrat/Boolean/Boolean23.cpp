#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, a1, a3;
    cin >> a;
    a1 = a / 100;
    a3 = a % 10;
    bool bb = a1 == a3;
    cout << bb;
    return 0;
}
