#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    bool exists1 = false;
    bool exists2 = false;
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]=='e' && str[i+1]=='e')
            exists1 = true;
        if(str[i]=='a' && str[i+1]=='b')
            exists2 = true;
    }

    if(exists1 == true) cout << "Yes ";
    else cout << "No ";

    if(exists2==true) cout << "Yes";
    else cout << "No";

    return 0;
}