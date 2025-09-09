#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int k=0;k<1;k++)
        {
            for(int j=0;j<n-i;j++)
                cout << "*";
            for(int j=0;j<i;j++)
                cout << " ";
        }
        for(int k=0;k<1;k++)
        {
            for(int j=0;j<i;j++)
                cout << " ";
            for(int j=0;j<n-i;j++)
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

//      별 공백                            공백  별 
// i=0  4   0   * * * *     * * * *  i=0    0    4
// i=1  3   1   * * * v     v * * *  i=1    1    3
// i=2  2   2   * * v v     v v * *  i=2    2    2
// i=3  1   3   * v v v     v v v *  i=3    3    1