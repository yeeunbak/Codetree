#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='e')
        {
            s.erase(i, 1);
            break;
        }
    }
    cout << s;
    return 0;
}