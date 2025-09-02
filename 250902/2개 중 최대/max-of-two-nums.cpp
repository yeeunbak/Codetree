#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    a = a > b ? a : b;
    cout << a;
    return 0;
}