#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) 
        cin >> A[i];
    // Please write your code here.

    int min = A[0];
    int cnt = 0;

    for(int i=0;i<N;i++)
    {
        if(A[i]<min)
            min = A[i];
    }

    for(int i=0;i<N;i++)
    {
        if(A[i]==min)
            cnt++;
    }
    cout << min << " " << cnt;
    return 0;
}
