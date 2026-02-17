#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a, b, c, p;
    cin >> a >> b;
    c = sqrt(a * a + b * b);
    p = a + b + c;
    cout << "C = " << c << "\nP = " << p;
    return 0;
}