#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    double ft = 30.48;
    double n;
    cin >> n;

    cout << fixed << setprecision(1);
    cout << n*ft;
    return 0;
}