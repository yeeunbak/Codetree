#include <iostream>

using namespace std;

int N;

void PrintSum(int N){
    
    int sum = 0;
    for(int i=1;i<=N;i++)
        sum+=i;
    sum/=10;
    cout << sum;
}

int main() {
    cin >> N;

    // Please write your code here.
    PrintSum(N);
    return 0;
}