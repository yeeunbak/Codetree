#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    char c = str[0];
    char d = str[1];

    for(int i=0;i<str.size();i++)
    {
        if(str[i]==d)
            str[i]=c;
    }
    cout << str;
    return 0;
}