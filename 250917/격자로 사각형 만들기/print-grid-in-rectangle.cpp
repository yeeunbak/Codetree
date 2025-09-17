#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[100][100];
    for(int i=0;i<n;i++)
    {    
        for(int j=0;j<n;j++)
        {
            arr[i][0]=1;
            arr[0][j]=1;
        }
    }

    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            arr[i][j] = arr[i-1][j]+arr[i][j-1]+arr[i-1][j-1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}