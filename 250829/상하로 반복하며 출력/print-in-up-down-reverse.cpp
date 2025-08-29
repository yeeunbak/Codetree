#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;
    int arr[N][N];

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(j%2!=0)
            {
                cout << i;
            }
            else
            {
                cout << N-i+1;
            }
        }
        cout << "\n";
    }


    return 0;
}