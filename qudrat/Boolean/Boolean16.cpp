#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    bool bb = a %  2 == 0 && a > 9 && a < 100;
    cout << bb;
    return 0;
}
