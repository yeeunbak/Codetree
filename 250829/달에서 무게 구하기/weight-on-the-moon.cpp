#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int w=13;
    double g=0.165;

    cout << fixed;
    cout << w << " * ";
    cout.precision(6);
    cout << g << " = " << w*g;
    return 0;
}