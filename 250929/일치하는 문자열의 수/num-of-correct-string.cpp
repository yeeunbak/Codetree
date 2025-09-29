#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string A;
    cin >> n >> A;
    
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        string input;
        cin >> input;

        if(input == A)
            cnt++;
    }
    cout << cnt;
    return 0;
}