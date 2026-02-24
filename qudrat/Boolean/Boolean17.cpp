#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    bool bb = a % 2 == 1 && a > 99 && a < 1000;
    cout << bb;
    return 0;
}
