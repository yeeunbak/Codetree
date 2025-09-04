#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int sum=0;
    for(n;n<=100;n++)
    {
        sum += n;
    }
    cout << sum;
    return 0;
}