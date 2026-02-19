#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double x, a, y;
    cin >> x >> a >> y;
    cout << "1 kg: " << a / x << "\n" << y << " kg: " << a / x * y;
    return 0;
}
