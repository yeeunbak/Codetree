#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for(int i=0;i<str.size();i++)
    {
        if(isalpha(str[i]))
        {
            if(str[i]>='A' && str[i]<='Z')
                cout << str[i];
            else
                cout << (char)(str[i]-'a'+'A');
        }
    }
    return 0;
}