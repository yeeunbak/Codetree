#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            cout << (char)(str[i]-'A'+'a');
        else if(str[i]>='a' && str[i]<='z')
            cout << (char)(str[i]-'a'+'A');
    }
    return 0;
}