#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;
    cin >> A >> B >> C;

    // B < A < C
    if(B<A && A<C && B<C)
        cout << A;
    // C < A < B
    else if(C<A && A<B && C<B)
        cout << A;

    // A < B < C
    else if(A<B && B<C && A<C)
        cout << B;
    // C < B < A
    else if(C<B && B<A && C<A)
        cout << B;

    // A < C < B
    else if(A<C && C<B && A<B)
        cout << C;
    // B < C < A
    else if(B<C && C<A && B<A)
        cout << C;
    return 0;
}