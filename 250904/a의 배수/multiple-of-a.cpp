#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a;
    cin >> n >> a;

    int i=1;
    while(i<=n)
    {
        if(i%a==0)
            cout << "1\n";
        else
            cout << "0\n";
        i++;
    }
    return 0;
}