#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string A, B;
    cin >> A >> B;

    cout << stoi(A+B) + stoi(B+A);
    return 0;
}