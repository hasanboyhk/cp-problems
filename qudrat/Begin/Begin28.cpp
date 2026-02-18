#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << "A^2: " << pow(a, 2) << 
            "\nA^3: " << pow(a, 3) <<
            "\nA^5: " << pow(a, 5) <<
            "\nA^10: " << pow(a, 10) <<
            "\nA^15: " << pow(a, 15);
    return 0;
}
