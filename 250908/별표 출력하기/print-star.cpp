#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt=0;

    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<=cnt;j++)
            cout << "* ";
        cout << "\n";

        if(i<n-1)
            cnt++;
        else
            cnt--;
    }
    return 0;
}