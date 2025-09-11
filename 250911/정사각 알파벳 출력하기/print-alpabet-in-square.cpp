#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    char x = 'A';
    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << (char)(x+cnt);
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}