#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double ft = 30.48;  //cm
    double mi = 160934; //cm

    double a=9.2;
    double b=1.3;

    cout << fixed;
    cout.precision(1);
    cout << a << "ft = " << 9.2 * 30.48 << "cm\n";
    cout << b << "mi = " << 1.3 * 160934 << "cm";

    return 0;
}