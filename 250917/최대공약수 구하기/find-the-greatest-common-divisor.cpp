#include <iostream>

using namespace std;

int n, m;

void gcd(int n, int m){

    int c;
    while(m)
    {
        c = n%m;
        n = m;
        m = c;
    }
    cout << n;
}

int main() {
    cin >> n >> m;
    gcd(n, m);
    // Please write your code here.

    return 0;
}