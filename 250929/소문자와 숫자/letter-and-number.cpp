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
                cout << (char)(str[i]-'A'+'a');
            else
                cout << str[i];
        }
        else if(isdigit(str[i]))
            cout << str[i];
    }
    return 0;
}