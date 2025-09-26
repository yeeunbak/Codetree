#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    if(c=='z')
        cout << 'a';
    else
        cout << (char)(c+1);
    return 0;
}