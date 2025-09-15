#include <iostream>
#include <climits>
using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i=0;i<N;i++)
    {
        if(A[i]>max1)
            max1 = A[i];
    }

    for(int i=0;i<N;i++)
    {
        if(A[i]>max2 && A[i]<max1)
            max2 = A[i];
    }

    cout << max1 << " " << max2;
    
    return 0;
}
