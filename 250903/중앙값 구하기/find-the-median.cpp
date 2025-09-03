#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    if((b>=a && a>=c && b>=c) || (c>=a && a>=b && c>=b))
        cout << a;
    else if((a>=b && b>=c && a>=c) || (c>=b && b>=a && c>=a))
        cout << b;
    else if((a>=c && c>=b && a>=b) || (b>=c && c>=a && b>=a))
        cout << c;
    return 0;
}