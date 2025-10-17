#include <iostream>

using namespace std;

int a, b;
int cnt=0;

bool Game369(int n)
{
    return(n%10==3 || n%10==6 || n%10==9 || n/10==3 || n/10==6 || n/10==9);
}

int GameCnt(int n1, int n2)
{
    for(int i=n1;i<=n2;i++)
    {
        if(Game369(i) || i%3==0)
            cnt++;
    }
    return cnt;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << GameCnt(a, b);
    return 0;
}