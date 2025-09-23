#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    bool exists = false;
    // Please write your code here.
    for(int i=0;i<input_str.length();i++)
    {
        if(input_str.substr(i,target_str.length()) == target_str)
        {
            exists = true;
            cout << i;
            break;
        }
    }

    if(!exists)
        cout << "-1";
    return 0;
}
