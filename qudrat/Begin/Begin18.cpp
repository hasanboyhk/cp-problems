#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int a, b, c, ac, bc;
    cin >> a >> b >> c;
    ac = abs(a - c);
    bc = abs(b - c);
    cout << ac * bc;
    return 0;        
}
