#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        int cnt = 0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                cnt++;
        }
        if(cnt == 2)
            cout << i << " ";
    }
    return 0;
}