//유클리드 호제법
#include <iostream>

using namespace std;

int n, m;

void gcd(int n, int m){

    int c;
    while(m)
    {
        c = n%m;
        n = m;
        m = c;
    }
    cout << n;
}

int main() {
    cin >> n >> m;
    gcd(n, m);
    // Please write your code here.

    return 0;
}


//comparison
#include <iostream>

using namespace std;

int n, m;

void maxnum(int n, int m){

    int num;
    for(int i=1;i<1000;i++)
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
