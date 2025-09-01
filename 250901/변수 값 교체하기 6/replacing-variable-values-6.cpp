#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 2, b = 5;
    int temp;

    temp = a;
    b = a;
    a = temp;

    cout << a << "\n" << b;
    return 0;
}