#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;

    int sum=0;
    for(A;A<=B;A++)
    {
        if(A%2==0)
            sum+=A;
    }

    cout << sum;
    return 0;
}