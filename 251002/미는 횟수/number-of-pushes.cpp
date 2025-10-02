#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string A, B;
    cin >> A >> B;

    int L = A.length();
    int cnt = 0;
    bool is_same = false;

    for(int i=0;i<L;i++)
    {
        A = A.substr(L-1, 1) + A.substr(0, L-1);
        cnt++;
        if(A==B)
        {
            is_same = true;
            cout << cnt;
            break;
        }
    }

    if(is_same==false)
        cout << "-1";

    return 0;
}