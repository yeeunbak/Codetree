#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int arr[100][100];
    int num = 0;
    // Please write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j%2==0)
                cout << i+(j*n) << " ";
            else
                cout << (n-1-i)+(j*n) << " ";
        }
        cout << "\n";
    }
    return 0;
}
 