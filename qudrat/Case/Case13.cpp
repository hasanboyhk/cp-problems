#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    double v, a;
    cin >> n >> v;
    switch(n){
        case 1:
        cout << "C: " << v * sqrt(2) << endl;
        cout << "H: " << v * sqrt(2) / 2 << endl;
        cout << "S: " << (v * sqrt(2)) * (v * sqrt(2) / 2) / 2; break;
        case 2: 
        a = v / sqrt(2);
        cout << "A: " << a << endl;
        cout << "H: " << a * sqrt(2) / 2 << endl;
        cout << "S: " << (a * sqrt(2)) * (a * sqrt(2) / 2) / 2; break;
        case 3: 
        a = v * 2 / sqrt(2);
        cout << "A: " << a << endl;
        cout << "C: " << a * sqrt(2) << endl;
        cout << "S: " << (a * sqrt(2)) * (a * sqrt(2) / 2) / 2; break;
        case 4:
        a = sqrt(2 * v);
        cout << "A: " << a; break;
        cout << "C: " << a * sqrt(2) << endl;
        cout << "H: " << a * sqrt(2) / 2 << endl;
    }
    return 0;
}
