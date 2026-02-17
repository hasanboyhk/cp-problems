#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int x1, y1, x2, y2, a, b, p, s;
    cin >> x1 >> y1 >> x2 >> y2;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    p = 2 * (a + b);
    s = a * b;
    cout << "P = " << p << "\nS = " << s;
}
