#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<2*n;i++)
    {
        if(i<n)
        {
            for(int j=0;j<=i;j++)
                cout << "*";
            cout << "\n\n";
        }
        else
        {
            for(int j=n-2;j>=i-n;j--)
                cout << "*";
            cout << "\n\n";
        }
    }
    return 0;
}