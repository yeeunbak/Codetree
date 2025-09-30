#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

void PrintMin(int n1, int n2, int n3){
    cout << min({n1, n2, n3}); 
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    PrintMin(a, b, c);
    return 0;
}