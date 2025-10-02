#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int L = s.length();

    cout << s << "\n";
    
    for(int i=0;i<L;i++)
    {
        s = s.substr(L-1, 1) + s. substr(0, L-1);
        cout << s << "\n";
    }
    return 0;
}