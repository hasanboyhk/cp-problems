#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int aa, bb, cc;
    aa = a * -1;
    bb = b * -1;
    cc = c * -1;
    bool check = a == bb || aa == b || bb == c || b == cc || a == cc || aa == c;
    cout << check;
    return 0;
}
