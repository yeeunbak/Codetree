#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][100];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            arr[0][j] = 1; //행 1로 초기화
            arr[i][0] = 1; //열 1로 초기화
        }
    }
    
    for(int i=1;i<5;i++)
        for(int j=1;j<5;j++)
            arr[i][j] = arr[i-1][j]+arr[i][j-1];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}