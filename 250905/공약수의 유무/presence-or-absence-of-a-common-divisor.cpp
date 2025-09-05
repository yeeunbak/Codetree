#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    bool composite_1920 = false;
    bool composite_2880 = false;
    for(int i=a;i<=b;i++)
    {
        if(1920%i==0)
            composite_1920 = true;
        if(2880%i==0)
            composite_2880 = true;
    }

    if(composite_1920 == true && composite_2880 == true)
        cout << "1";
    else
        cout << "0";
    return 0;
}