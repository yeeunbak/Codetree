#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    while(1)
    {
        cin >> n;
        if(n<25)
            cout << "Higher\n";
        else if(n>25)
            cout << "Lower\n";
        else if(n==25)
        {
            cout << "Good\n";
            break;
        }
    }
    return 0;
}