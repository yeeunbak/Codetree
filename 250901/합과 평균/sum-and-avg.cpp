#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    double sum = a+b;
    cout << a+b << " ";
    cout << fixed << setprecision(1) << sum/2;
    return 0;
}