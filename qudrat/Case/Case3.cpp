#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    switch (n) {
        case 1:
        case 2:
        case 12:
            cout << "qish";
            break;
        case 3:
        case 4:
        case 5:
            cout << "bahor";
            break;
        case 6:
        case 7:
        case 8:
            cout << "yoz";
            break;
        case 9:
        case 10:
        case 11:
            cout << "kuz";
            break;
    }
    return 0;
}
