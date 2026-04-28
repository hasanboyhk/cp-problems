#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    double v, r;
    cin >> n >> v;
    switch(n){
        case 1:
        cout << "D: " << v * 2 << endl;
        cout << "L: " << 2 * 3.14 * v << endl;
        cout << "S: " << v * v * 3.14; break;
        case 2:
        r = v / 2;
        cout << "R: " << r << endl;
        cout << "L: " << 2 * 3.14 * r << endl;
        cout << "S: " << r * r * 3.14; break;
        case 3:
        r = v / 2 / 3.14;
        cout << "R: " << r << endl;
        cout << "D: " << r * 2 << endl;
        cout << "S: " << r * r * 3.14; break;
        case 4:
        r = sqrt(v / 3.14);
        cout << "R: " << r; break;
        cout << "D: " << r * 2 << endl;
        cout << "L: " << 2 * 3.14 * r << endl;
    }
    return 0;
}
