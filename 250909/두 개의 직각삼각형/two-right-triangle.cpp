#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int k=0;k<1;k++)
        {
            for(int j=0;j<4-i;j++)
                cout << "*";
            for(int j=0;j<i;j++)
                cout << " ";
        }
        for(int k=0;k<1;k++)
        {
            for(int j=0;j<i;j++)
                cout << " ";
            for(int j=0;j<4-i;j++)
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}