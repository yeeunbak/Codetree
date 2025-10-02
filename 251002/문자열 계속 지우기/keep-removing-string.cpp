#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    // Please write your code here.
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==B[0] && A[i+1]==B[1])
        {
            A.erase(i, 2);
            i = -1;
        }
    }
    cout << A;
    return 0;
}
