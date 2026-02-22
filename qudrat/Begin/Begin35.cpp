#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int v, u, t1, t2, s;
    cin >> v >> u >> t1 >> t2;
    s = (v - u) * t2 + (v + u) * t1;
    cout << s;
    return 0;
}
