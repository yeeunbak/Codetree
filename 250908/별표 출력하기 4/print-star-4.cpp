#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = n;

    for(int i=0;i<2*n-1;i++)
    {
        if(i<n)
        {
            for(int j=n;j>i;j--)
                cout << "* ";
            cout << "\n";
        }
        else
        {
            for(int j=0;j<=i-n+1;j++)
                cout << "* ";
            cout << "\n";
        }
    }
    return 0;
}