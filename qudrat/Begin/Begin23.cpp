#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int a, b, c, tmp;
    cin >> a >> b >> c;
    tmp = b;
    b = a;
    a = c;
    c = tmp;
    cout << a << " " << b << " " << c;
    return 0;        
}
