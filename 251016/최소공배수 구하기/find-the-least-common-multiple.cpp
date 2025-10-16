#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

void func(int n, int m){

    int val = 1;

    int Min = min(n, m);
    int Max = max(n, m);
    for(int i=2;i<=Min;i++)
    {
        if((n%i == 0) && (m%i == 0))
        {
            val*=i;
            n = n/i;
            m = m/i;
        }
    }
    val = val*n*m;
    cout << val;

}

int main() {
    cin >> n >> m;

    // Please write your code here.
    func(n, m);
    return 0;
}
