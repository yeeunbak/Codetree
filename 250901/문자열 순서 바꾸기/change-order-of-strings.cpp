#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string S, T;
    string temp;
    cin >> S >> T;

    temp = S;
    S = T;
    T = temp;

    cout << S << "\n" << T;
    return 0;
}