#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int prod = 1;
    for(int i=1;i<=n;i++)
    {
        prod *= i;
        if(prod>=n)
        {
            cout << i;
            break;
        }
    }
    return 0;
}