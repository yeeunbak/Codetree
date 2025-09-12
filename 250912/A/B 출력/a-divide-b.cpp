#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    double num;
    cout << a/b << ".";

    for(int i=0;i<20;i++)
    {
        a = ((a%b)*10);
        num = a/b;
        cout << num;        
    }
    return 0;
}