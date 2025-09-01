#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;
    int temp;
    // b에는 a, c에는 b, a에는 c

    temp = a;
    a = b;
    b = temp;

    temp = a;
    a = c;
    c = temp;

    cout << a << "\n" << b << "\n" << c;
    return 0;
}