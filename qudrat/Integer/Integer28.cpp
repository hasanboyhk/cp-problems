#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    cout << (k + (n + 5) % 7) % 7 + 1;
    return 0;
}
