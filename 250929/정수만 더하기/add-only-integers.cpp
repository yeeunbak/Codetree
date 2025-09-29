#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string A;
    cin >> A;

    int sum = 0;
    for(int i=0;i<A.size();i++)
    {
        if(isdigit(A[i]))
            sum+=(A[i]-'0');
    }
    cout << sum;
    return 0;
}