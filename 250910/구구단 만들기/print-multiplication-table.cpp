#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    for(int i=1;i<=9;i++)
    {
        for(int j=b;j>=a;j-=2)
        {
            cout << j << " * " << i << " = " << j*i;
            if(j>a)
                cout << " / ";
        }
        cout << "\n";
    }
    return 0;
}