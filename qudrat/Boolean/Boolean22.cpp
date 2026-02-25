#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, a1, a2, a3;
    cin >> a;
    a1 = a / 100;
    a2 = a / 10 % 10;
    a3 = a % 10;
    bool bb = a1 == a2 - 1 && a2 == a3 - 1;
    bool bd = a2 + 1 == a1 && a3 + 1 == a2;
    bool result = bb || bd;
    cout << result;
    return 0;
}
