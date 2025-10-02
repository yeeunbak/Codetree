#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    int i;
    // Please write your code here.
    for(i=0;i<A.length();i++)
    {
        if(A[i]==B[0] && A[i+1]==B[1])
        {
            A.erase(i, 2);
            i = 0;
        }
    }

    cout << A;
    return 0;
}
