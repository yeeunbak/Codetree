#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    string str = to_string(n);
    int sum = 0;
    
    for(int i=0;i<str.size();i++)
        sum += str[i]-'0';

    cout << sum;
    return 0;
}