#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    char c;
    cin >> str >> c;

    bool exists = false;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==c)
        {
            exists = true;
            cout << i;
            break;
        }
    }

    if(exists==false)
        cout << "No";
    return 0;
}