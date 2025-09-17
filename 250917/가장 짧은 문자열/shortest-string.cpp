#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    string s2;
    string s3;

    cin >> s1 >> s2 >> s3;
    
    cout << max({s1.length(), s2.length(), s3.length()}) - min({s1.length(), s2.length(), s3.length()});

    return 0;
}