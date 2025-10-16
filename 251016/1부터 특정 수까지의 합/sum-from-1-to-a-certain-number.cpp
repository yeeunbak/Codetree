#include <iostream>

using namespace std;

int N;

int PrintSum(int N){
    
    int sum = 0;
    for(int i=1;i<=N;i++)
        sum+=i;
    sum/=10;
    return sum;
}

int main() {
    cin >> N;

    // Please write your code here.
    int total_num = PrintSum(N);
    cout << total_num;
}