#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt;
    cin >> cnt;

    int n;
    int sum=0;
    for(int i=0;i<cnt;i++)
    {
        cin >> n;
        if(n%2!=0 && n%3==0)
            sum += n;
    }
    cout << sum;
    return 0;
}