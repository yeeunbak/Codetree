#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    int min;

    if(b>a && c>a)
        min = a;
    else if(a>b && c>b)
        min = b;
    else if(a>c && b>c)
        min = c;
    
    cout << (a==min) << " ";
    cout << (a==b==c);
    return 0;
}