#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            for(int k=n;k>i;k--)
                cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}