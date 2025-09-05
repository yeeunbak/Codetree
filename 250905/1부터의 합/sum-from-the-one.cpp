#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int sum=0;
    for(int i=1;i<=100;i++)
    {   
        if(sum>=n)
        {
            cout << sum;
            break;
        }
        sum+=i;
    }
    return 0;
}