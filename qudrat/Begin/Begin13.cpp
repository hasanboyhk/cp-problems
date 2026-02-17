#include <iostream>
using namespace std;
int main(){
    double r1, r2, s1, s2, s3;
    cin >> r1 >> r2;
    s1 = 3.14 * r1;
    s2 = 3.14 * r2;
    s3 = 3.14 * (r1 - r2);
    cout << s1 << endl << s2 << endl << s3;
    return 0;
}