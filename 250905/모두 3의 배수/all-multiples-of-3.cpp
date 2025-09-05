#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool satisfied = true;
    for(int i=0;i<5;i++)
    {
        cin >> n;
        if(n%3!=0)
            satisfied = false;
    }

    if(satisfied == true)
        cout << "1";
    else
        cout << "0";
    return 0;
}