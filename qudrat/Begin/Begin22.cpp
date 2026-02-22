#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, tmp;
    cin >> a >> b;
    tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b;
    return 0;
}
