#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a, b;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        cin >> a >> b;
        for(int i=a;i<=b;i++)
        {
            if(i%2==0)
                sum+=i;
        }
        cout << sum << "\n";
    }
    return 0;
}