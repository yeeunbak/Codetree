#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char a, b;
    cin >> a >> b;

    cout << int(a+b) << " " << int(max(a, b)-min(a, b));
    return 0;
}