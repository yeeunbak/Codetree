#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int t;
    cin >> t;

    if(t<0)
        cout << "ice";
    else if(t>=100)
        cout << "vapor";
    else if(t>=0 && t<100)
        cout << "water";
    return 0;
}