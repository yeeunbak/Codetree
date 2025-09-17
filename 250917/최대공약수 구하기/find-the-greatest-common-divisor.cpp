#include <iostream>

using namespace std;

int n, m;

void maxnum(int n, int m){

    int num;
    for(int i=1;i<100;i++)
    {
        if((n%i==0) && (m%i==0))
            num = i;
    }
    cout << num;
}

int main() {
    cin >> n >> m;
    maxnum(n, m);
    // Please write your code here.

    return 0;
}