#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int arr[10][10]={0, };

    for(int i=0;i<m;i++)
    {
        int r, c;
        cin >> r >> c;

        arr[r-1][c-1] = r*c;
    } 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}