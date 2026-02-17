#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int a, b, c, ac, bc, l;
    cin >> a >> b >> c;
    ac = abs(a - c);
    bc = abs(b - c);
    l = ac + bc;
    cout << "AC = " << ac << "\nBC = " << bc << "\nl = " << l;
    return 0;        
}
