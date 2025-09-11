#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    int a, b;


    for(int i=0;i<n;i++)
    {
        int val = 1;
        cin >> a >> b;
        for(int i=a;i<=b;i++)
            val *= i;
        cout << val << "\n";
    }
    return 0;
}