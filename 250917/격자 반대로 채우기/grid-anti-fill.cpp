#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[100][100];
    int num = n*n;

    for(int j=0;j<n;j++)
    {
        if((j%2==0 && n%2==0) || (j%2!=0 && n%2!=0))
        {
            for(int i=0;i<n;i++)
                arr[n-1-i][j] = num--;
        }
        else
        {
            for(int i=0;i<n;i++)
                arr[i][j] = num--;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    
    return 0;
}