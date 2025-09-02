#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    
    if(b>=a && c>=a)
        cout << a;
    else if(a>=b && c>=b)
        cout << b;
    else if(a>=c && b>=c)
        cout << c;
    return 0;
}