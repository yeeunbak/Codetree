#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    int n;
    cin >> c >> n;

    if(c=='A')
    {
        for(int i=1;i<=n;i++)
            cout << i << " ";
    }
    if(c=='D')
    {
        for(int i=n;i>=n;i--)
            cout << i << " ";
    }
    return 0;
}