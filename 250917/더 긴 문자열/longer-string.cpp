#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string wd1;
    string wd2;
    cin >> wd1 >> wd2;

    if(wd1.length()>wd2.length())
        cout << wd1 << " " << wd1.length();
    else if(wd1.length()<wd2.length())
        cout << wd2 << " " << wd2.length();
    else
        cout << "same";
    return 0;
}