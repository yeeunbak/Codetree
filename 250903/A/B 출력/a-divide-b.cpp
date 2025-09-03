#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    long double c = a/b;
    cout << fixed << setprecision(21);
    cout << c;
    return 0;
}