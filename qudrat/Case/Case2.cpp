#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    switch (k) {
        case 1:
            cout << "yomon";
            break;
        case 2:
            cout << "qoniqarsiz";
            break;
        case 3:
            cout << "qoniqarli";
            break;
        case 4:
            cout << "yaxshi";
            break;
        case 5:
            cout << "a'lo";
            break;
        default:
            cout << "xato";
    }
    return 0;
}
