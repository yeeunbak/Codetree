#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int prod = 1;
    int cnt=0;
    cin >> n;

    while(1)
    {   
        prod*=2;
        cnt++;
        if(n==prod)
        {
            cout << cnt;
            break;
        }
    }
    return 0;
}