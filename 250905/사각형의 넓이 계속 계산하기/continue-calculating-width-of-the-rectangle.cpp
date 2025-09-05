#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int w, h;
    char c;
    while(1)
    {
        cin >> w >> h >> c;
        cout << w*h << "\n";
        if(c=='C')
        {
            break;
        }
        else
            continue;
    }
    return 0;
}