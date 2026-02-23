#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    bool bb = a % 2 == 1 && b % 2 == 1;
    cout << bb;
    return 0;
}
