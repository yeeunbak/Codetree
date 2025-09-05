#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    bool satisfied = true;

    for(int i=a;i<=b;i++)
    {
        if(c%i==0)
            satisfied = false;
    }
    if(satisfied==true)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}