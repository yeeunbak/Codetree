#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    while(1)
    {   
        cin >> n;
        if(n%2!=0)
            continue;
        else if(n%2==0)
        {
            cout << n/2 << "\n";
            cnt++;
            if(cnt==3)
                break;
        }
    }
    return 0;
}