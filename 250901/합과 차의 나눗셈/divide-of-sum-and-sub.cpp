#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    double sum = a+b;
    double sub = a-b;
    cout << fixed << setprecision(2);
    cout << sum/sub;
    return 0;
}