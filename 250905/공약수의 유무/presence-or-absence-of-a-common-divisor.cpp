#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    bool composite = false;

    for(int i=a;i<=b;i++)
    {
        if(1920%i==0 && 2880%i==0)
            composite = true;
    }

    if(composite == true)
        cout << "1";
    else
        cout << "0";
    return 0;
}