#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << 2*i + 2*j + 11 << " ";
        cout << "\n";
    }
    return 0;
}
