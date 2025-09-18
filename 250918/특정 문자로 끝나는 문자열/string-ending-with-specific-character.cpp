#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[10];
    char c;
    for(int i=0;i<10;i++)
        cin >> str[i];
    cin >> c;

    bool satisfied = false;
    for(int i=0;i<10;i++)
    {
        if(str[i][str[i].length()-1] == c)
        {
            satisfied = true;
            cout << str[i] << "\n";
        }
    }

    if(satisfied == false)
        cout << "None";

    return 0;
}