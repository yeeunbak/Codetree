#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int arr[10][10] = {};
    int num = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j] = num;
            num++;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}