#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++) // 0 1 2 3
    {
        for(int j=n;j>i;j--) // 4 3 2 1 / 4 3 2 / 4 3 / 4
        {
            for(int k=n;k>i;k--) //4 3 2 1 / 4 3 2 / 4 3 / 4
                cout << "*";
            cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

// 해설
// i = 4 3 2 1                    행
// j = 1 2 3 4 / 1 2 3 / 1 2 / 1  행의 뭉탱이 단위
// k = 1 2 3 4 / 1 2 3 / 1 2 / 1  뭉탱이의 내부 별의 개수