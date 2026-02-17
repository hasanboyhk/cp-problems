#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){ 
    int x1, y1, x2, y2;
    double l;
    cin >> x1 >> y1 >> x2 >> y2;
    l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << l;
    return 0;        
}
