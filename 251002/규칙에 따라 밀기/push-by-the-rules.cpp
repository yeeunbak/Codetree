#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string A;
    cin >> A;

    string move;
    cin >> move;

    int l = A.length();

    for(int i=0;i<move.length();i++)
    {
        if(move[i]=='L')
            A = A.substr(1, l-1) + A.substr(0, 1);
        else if(move[i]=='R')
            A = A.substr(l-1, 1) + A.substr(0, l-1);
    }

    cout << A;

    return 0;
}