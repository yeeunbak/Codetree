#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[100][100];

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
            cout << i+(n*j) << " ";
        cout << "\n";
    }
    return 0;
}