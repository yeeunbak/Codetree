#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

int PrintMin(int n1, int n2, int n3){
    return min({n1, n2, n3}); 
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << PrintMin(a, b, c);
    return 0;
}