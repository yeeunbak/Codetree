#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    while (N>0)
    {
        cout << N << "\n";
        N/=M;
    }
    // Please write your code here.
    
    return 0;
}
