#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string sentence;
    cin >> sentence;

    sentence[1]='a';
    sentence[sentence.length()-2]='a';
    
    cout << sentence;
    return 0;
}