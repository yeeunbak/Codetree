#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    while(1)
    {
        cin >> str;
        if(str=="END")
            break;

        for(int i=str.size()-1;i>=0;i--)
            cout << str[i];
        cout << "\n";
    }
    return 0;
}