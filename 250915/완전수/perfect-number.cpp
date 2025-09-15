#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int cnt = 0;

    // Please write your code here.
    for(int i=st;i<=ed;i++)
    {
        int ans = 0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                ans+=j;
        }
        if(ans==i)
            cnt++;
    }
    cout << cnt;
    return 0;
}
