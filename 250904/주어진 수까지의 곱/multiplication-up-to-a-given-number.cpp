#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    int prod = 1;
    for(int i=a;i<=b;i++)
    {
        prod *= i;
    }
    cout << prod;
    return 0;
}