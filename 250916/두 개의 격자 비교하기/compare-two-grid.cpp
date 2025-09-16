#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int n, m;
    cin >> n >> m;

    int arr1[100][100];
    int arr2[100][100];
    int arr[100][100];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> arr1[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> arr2[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
                arr[i][j] = 1;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }   

    return 0;
}