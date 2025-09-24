#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    str.erase(2, 1);
    str.erase(str.size()-3, 1);
    cout << str;
    return 0;
}