#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int a, b, c, tmp;
    cin >> a >> b >> c;
    tmp = c;
    c = a;
    a = b;
    b = tmp;
    cout << a << " " << b << " " << c;
    return 0;        
}
