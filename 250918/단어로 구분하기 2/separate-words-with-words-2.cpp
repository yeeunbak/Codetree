#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[10];

    for(int i=0;i<10;i++)
    {
        cin >> str[i];
        if(i%2!=0)
        {
            cout << str[i] << "\n";
        }
    }
    return 0;
}