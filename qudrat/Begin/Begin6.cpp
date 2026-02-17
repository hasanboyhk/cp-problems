#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int v, s;
    v = a * b * c;
    s = 2 * (a * b + b * c + a * c);
    cout << "V = " << v << "\nS = " << s;
    return 0;
}